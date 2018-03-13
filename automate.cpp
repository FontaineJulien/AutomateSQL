#include "automate.h"

#include <fstream>
#include<cstdlib>

#include "pronomInterrogatif.h"
#include "verbe.h"
#include "finPhrase.h"
#include "nomRubrique.h"
#include "determinant.h"

using namespace std;

Automate::Automate() {
  this->current = new Etat(1);
  Etat* e2 = new Etat(2);
  //this->current->setTransition("Quel",e2);
}

void Automate::transition(InterfaceMot* mot) {
  cout << "current : " << current->getEtiquette() << endl;
  current = current->doTransition(mot);
  cout << "current : " << current->getEtiquette() << endl;
}

void Automate::loadAlpha(char* inputFile) {
  ifstream file;
  file.open(inputFile);

  string mot, type_mot;
  bool running = true;

  if(file.is_open()) {

    while(running) {
      file >> mot >> type_mot;

      if(mot.compare("EOF") == 0) {
        running = false;
      } else {
        InterfaceMot* p;
        if(type_mot.compare("pronom_interrogatif")) {
          p = new PronomInterrogatif(mot);
        } else {
          if(type_mot.compare("verbe")) {
            p = new Verbe(mot);
          } else {
            if(type_mot.compare("determinant")) {
              p = new Determinant(mot);
            } else {
              if(type_mot.compare("nom_rubrique")) {
                p = new NomRubrique(mot);
              } else {
                if(type_mot.compare("fin")) {
                  p = new FinPhrase(mot);
                }
              }
            }
          }
        }
        cout << p->getMot() << endl;
        alpha.push_back(p);
      }
    }

    file.close();
  } else {
    cerr << "Impossible d'ouvrir le fichier : " << inputFile << endl;
    exit(1);
  }
}

void Automate::loadAutomate(char* inputFile) {

}

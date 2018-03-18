#include "automate.h"

#include <fstream>
#include<cstdlib>
#include <locale>
#include <boost/algorithm/string.hpp>

#include "pronomInterrogatif.h"
#include "verbe.h"
#include "finPhrase.h"
#include "nomRubrique.h"
#include "determinant.h"
#include "valeurRubrique.h"
#include "qualificateur.h"

using namespace std;

std::string to_lower(const std::string& str) {
  locale loc;
  string lc_str = "";

  for (string::size_type i=0; i<str.length(); ++i)
    lc_str += std::tolower(str[i],loc);

  return lc_str;
}

Automate::Automate() {
  requete = new Requete();
  this->loadAlpha((char*)"dico.txt");
  this->loadAutomate((char*)"auto1.txt");
}

std::string Automate::start(string str) {

  vector<string> str_tab;
  boost::split(str_tab, str, boost::is_any_of("\t "));

  for(vector<string>::iterator it = str_tab.begin(); it != str_tab.end(); ++it){
    this->transition(*it);
  }

  return this->getRequete();
}

InterfaceMot* Automate::find(const std::string& str_mot) {
  for(vector<InterfaceMot*>::const_iterator it = alpha.begin(); it != alpha.end(); ++it) {
    if((*it)->getMot().compare(to_lower(str_mot)) == 0) {
      return *it;
    }
  }

  return NULL;
}

void Automate::transition(const string& str_mot) {
  InterfaceMot* mot = find(str_mot);
  if(mot != NULL){
    current = current->doTransition(mot,requete);
    if(current == NULL) {
      cerr << "Mot invalide : " << str_mot << endl;
      exit(1);
    }
  } else {
    cerr << "Mot inconnu : " << str_mot << endl;
    exit(1);
  }

}

void Automate::loadAlpha(char* inputFile) {
  ifstream file;
  file.open(inputFile);

  string mot, type_mot, nom_champ, nom_table;
  bool running = true;

  if(file.is_open()) {

    while(running) {
      file >> mot >> type_mot;

      if(mot.compare("EOF") == 0) {
        running = false;
      } else {
        InterfaceMot* p;
        if(type_mot.compare("pronom_interrogatif") == 0) {
          p = new PronomInterrogatif(mot);
        } else {
          if(type_mot.compare("verbe") == 0) {
            p = new Verbe(mot);
          } else {
            if(type_mot.compare("determinant") == 0) {
              p = new Determinant(mot);
            } else {
              if(type_mot.compare("nom_rubrique") == 0) {
                file >> nom_table;
                p = new NomRubrique(mot,nom_table);
              } else {
                if(type_mot.compare("fin") == 0) {
                  p = new FinPhrase(mot);
                } else {
                  if(type_mot.compare("valeur_rubrique") == 0) {
                    file >> nom_champ >> nom_table;
                    p = new ValeurRubrique(mot, nom_champ, nom_table);
                  } else {
                    if(type_mot.compare("qualificateur") == 0) {
                      file >> nom_champ >> nom_table;
                      p = new Qualificateur(mot,nom_champ,nom_table);
                    } else {
                      cerr << "Mot inconnu dans le lexique : " << mot << endl;
                      exit(1);
                    }
                  }
                }
              }
            }
          }
        }
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
  ifstream file;
  unsigned int nb_etat, nb_transition, id_etat, is_initial, is_final;
  unsigned int etat_src, etat_dst;
  string type_mot;

  file.open(inputFile);

  if(file.is_open()){
    file >> nb_etat >> nb_transition;

    for(unsigned int i = 0; i < nb_etat; i++){
      file >> id_etat >> is_initial >> is_final;
      Etat* e = new Etat(id_etat, (bool)is_initial, (bool)is_final);
      autom.push_back(e);
      if(is_initial == 1)
        current = e;
    }

    for(unsigned int i = 0; i < nb_transition; i++){
      file >> etat_src >> etat_dst >> type_mot;
      autom[etat_src-1]->setTransition(type_mot, autom[etat_dst-1]);
    }

    file.close();

  } else {
    cerr << "Impossible d'ouvrir le fichier : " << inputFile << endl;
    exit(1);
  }
}

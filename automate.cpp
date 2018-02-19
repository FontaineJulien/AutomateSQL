#include "automate.h"

using namespace std;

Automate::Automate(string file) {
  this->current = new Etat(1);
  Etat* e2 = new Etat(2);
  this->current->setTransition("Quel",e2);
}

void Automate::transition(const string & word) {
  cout << "current : " << current->getEtiquette() << endl;
  current = current->doTransition(word);
  cout << "current : " << current->getEtiquette() << endl;
}

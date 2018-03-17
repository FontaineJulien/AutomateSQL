#include "etat.h"

using namespace std;

#include "interfaceMot.h"

Etat::Etat(unsigned int etiquette, bool is_initial, bool is_final) : etiquette(etiquette) {
  this->is_final = is_final;
  this->is_initial = is_initial;
}

Etat* Etat::doTransition(InterfaceMot* mot, Requete* requete) {
  mot->updateRequete(requete);
  return transitions.find(mot->getTypeMot())->second;
}

void Etat::printTransitions() const {
  for(map<string, Etat*>::const_iterator it = transitions.begin(); it != transitions.end(); ++it) {
    cout << etiquette << " -> " << it->second->getEtiquette() << " " << it->first << endl;
  }
}

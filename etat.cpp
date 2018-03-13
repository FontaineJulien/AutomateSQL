#include "etat.h"

using namespace std;

Etat::Etat(unsigned int etiquette, bool is_initial, bool is_final) : etiquette(etiquette) {
  this->is_final = is_final;
  this->is_initial = is_initial;
}

Etat* Etat::doTransition(InterfaceMot* mot) const {
  return transitions.find(mot)->second;
}

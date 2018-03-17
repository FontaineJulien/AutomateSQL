#include "qualificateur.h"

void Qualificateur::updateRequete(Requete* requete) {
  requete->updateQualificateurs(this->nom_champ, this->getMot());
}

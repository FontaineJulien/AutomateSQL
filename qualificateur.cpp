#include "qualificateur.h"

void Qualificateur::updateRequete(Requete* requete) {
  requete->updateQualificateurs(this);
  requete->updateTables(this);
}

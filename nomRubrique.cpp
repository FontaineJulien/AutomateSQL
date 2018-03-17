#include "nomRubrique.h"

void NomRubrique::updateRequete(Requete* requete) {
  requete->updateTables(this);
}

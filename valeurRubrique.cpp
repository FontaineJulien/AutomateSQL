#include "valeurRubrique.h"

void ValeurRubrique::updateRequete(Requete* requete) {
  requete->updateValeursRubrique(this);
  requete->updateTables(this);
}

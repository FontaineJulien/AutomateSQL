#include "valeurRubrique.h"

void ValeurRubrique::updateRequete(Requete* requete) {
  requete->updateValeursRubrique(this->getMot());
}

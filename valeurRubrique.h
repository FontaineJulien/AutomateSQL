#ifndef __VALEUR_RUBRIQUE__
#define __VALEUR_RUBRIQUE__

#include "requete.h"
#include "etat.h"
#include "interfaceMot.h"

class ValeurRubrique : public InterfaceMot {

public:
  ValeurRubrique(std::string mot) : InterfaceMot(mot) {};
  void updateRequete(Requete requete, Etat etat);

};

#endif

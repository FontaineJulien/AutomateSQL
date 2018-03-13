#ifndef __NOM_RUBRIQUE__
#define __NOM_RUBRIQUE__

#include "requete.h"
#include "etat.h"
#include "interfaceMot.h"

class NomRubrique : public InterfaceMot {

public:
  NomRubrique(std::string mot) : InterfaceMot(mot) {};
  void updateRequete(Requete requete, Etat etat);

};

#endif

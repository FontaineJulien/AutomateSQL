#ifndef __DETERMINANT__
#define __DETERMINANT__

#include "requete.h"
#include "etat.h"
#include "interfaceMot.h"

class Determinant : public InterfaceMot {

public:
  Determinant(std::string mot) : InterfaceMot(mot,"determinant") {};
  void updateRequete(Requete* requete);

};

#endif

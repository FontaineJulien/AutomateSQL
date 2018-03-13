#ifndef __DETERMINANT__
#define __DETERMINANT__

#include "requete.h"
#include "etat.h"
#include "interfaceMot.h"

class Determinant : public InterfaceMot {

public:
  void updateRequete(Requete requete, Etat etat);

};

#endif

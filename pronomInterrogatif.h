#ifndef __PRONOM_INTERROGATIF__
#define __PRONOM_INTERROGATIF__

#include "interfaceMot.h"
#include "requete.h"
#include "etat.h"

class PronomInterrogatif : public InterfaceMot {

public:
  void updateRequete(Requete requete, Etat etat);
};

#endif

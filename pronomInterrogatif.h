#ifndef __PRONOM_INTERROGATIF__
#define __PRONOM_INTERROGATIF__

#include "interfaceMot.h"
#include "requete.h"
#include "etat.h"
#include <string>

class PronomInterrogatif : public InterfaceMot {

public:
  PronomInterrogatif(std::string mot) : InterfaceMot(mot,"pronom_interrogatif") {};
  void updateRequete(Requete* requete);
};

#endif

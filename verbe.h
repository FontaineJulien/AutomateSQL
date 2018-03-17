#ifndef __VERBE__
#define __VERBE__

#include "requete.h"
#include "etat.h"
#include "interfaceMot.h"

class Verbe : public InterfaceMot {

public:
  Verbe(std::string mot) : InterfaceMot(mot,"verbe") {};
  void updateRequete(Requete* requete);

};

#endif

#ifndef __VERBE__
#define __VERBE__

#include "requete.h"
#include "etat.h"
#include "interfaceMot.h"

class Verbe : public InterfaceMot {

public:
  void updateRequete(Requete requete, Etat etat);

};

#endif

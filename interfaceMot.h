#ifndef __INTERFACE__MOT__
#define __INTERFACE__MOT__

#include "requete.h"
#include "etat.h"

class InterfaceMot {

public:
  virtual void updateRequete(Requete requete, Etat etat) =0;
  virtual ~InterfaceMot() {};
};

#endif

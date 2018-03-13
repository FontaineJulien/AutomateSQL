#ifndef __INTERFACE__MOT__
#define __INTERFACE__MOT__

#include "requete.h"
#include "etat.h"
#include <string>

class InterfaceMot {

private:
  std::string mot;

public:
  InterfaceMot(std::string mot) : mot(mot) {};
  virtual void updateRequete(Requete requete, Etat etat) =0;
  virtual ~InterfaceMot() {};
  std::string getMot() const { return mot; };
};

#endif

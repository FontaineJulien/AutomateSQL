#ifndef __INTERFACE__MOT__
#define __INTERFACE__MOT__

#include "requete.h"
#include "etat.h"
#include <string>

class InterfaceMot {

private:
  std::string mot;
  std::string type_mot;

public:
  InterfaceMot(std::string mot, std::string type_mot) : mot(mot), type_mot(type_mot) {};
  virtual void updateRequete(Requete* requete) =0;
  virtual ~InterfaceMot() {};
  std::string getMot() const { return mot; };
  std::string getTypeMot() const { return type_mot; };
};

#endif

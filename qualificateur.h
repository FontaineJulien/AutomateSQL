#ifndef __QUALIFICATEUR__
#define __QUALIFICATEUR__

#include "requete.h"
#include "etat.h"
#include "interfaceMot.h"
#include <string>

class Qualificateur : public InterfaceMot {

private:
  std::string nom_champ;

public:
  Qualificateur(std::string mot, std::string nom_champ) : InterfaceMot(mot,"qualificateur"), nom_champ(nom_champ) {};
  void updateRequete(Requete* requete);

};

#endif

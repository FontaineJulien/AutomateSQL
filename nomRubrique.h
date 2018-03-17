#ifndef __NOM_RUBRIQUE__
#define __NOM_RUBRIQUE__

#include "requete.h"
#include "etat.h"
#include "interfaceMot.h"

class NomRubrique : public InterfaceMot {

private:
  std::string nom_table;

public:
  NomRubrique(std::string mot,std::string nom_table) : InterfaceMot(mot,"nom_rubrique"), nom_table(nom_table) {};
  void updateRequete(Requete* requete);
  std::string getNomTable() const { return nom_table; };

};

#endif

#ifndef __QUALIFICATEUR__
#define __QUALIFICATEUR__

#include "requete.h"
#include "etat.h"
#include "interfaceMot.h"
#include <string>

class Qualificateur : public InterfaceMot {

private:
  std::string nom_champ;
  std::string nom_table;

public:
  Qualificateur(std::string mot, std::string nom_champ, std::string nom_table) : InterfaceMot(mot,"qualificateur"), nom_champ(nom_champ), nom_table(nom_table) {};
  void updateRequete(Requete* requete);
  std::string getNomChamp() const { return nom_champ; };
  std::string getNomTable() const { return nom_table; };

};

#endif

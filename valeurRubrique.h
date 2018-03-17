#ifndef __VALEUR_RUBRIQUE__
#define __VALEUR_RUBRIQUE__

#include "requete.h"
#include "etat.h"
#include "interfaceMot.h"

class ValeurRubrique : public InterfaceMot {

private:
  std::string nom_champ;
  std::string nom_table;

public:
  ValeurRubrique(std::string mot, std::string nom_champ, std::string nom_table) : InterfaceMot(mot,"valeur_rubrique"), nom_champ(nom_champ), nom_table(nom_table) {};
  void updateRequete(Requete* requete);
  std::string getNomChamp() const { return nom_champ; };
  std::string getNomTable() const { return nom_table; };

};

#endif

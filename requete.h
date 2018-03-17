#ifndef __REQUETE__
#define __REQUETE__

#include <string>

class Requete {

private:
  std::string valeurs_rubrique;
  std::string tables;
  std::string qualificateurs;

public:
  Requete() : valeurs_rubrique("*"), tables(""), qualificateurs(""){};
  void updateValeursRubrique(const std::string& val);
  void updateTables(const std::string& nom);
  void updateQualificateurs(const std::string& champ, const std::string& valeur);
  std::string buildRequete() const;

};

#endif

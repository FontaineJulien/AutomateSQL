#ifndef __REQUETE__
#define __REQUETE__

#include <string>
#include <set>

class ValeurRubrique;
class NomRubrique;
class Qualificateur;

class Requete {

private:
  std::string valeurs_rubrique;
  std::set<std::string> tables;
  std::string qualificateurs;

public:
  Requete() : valeurs_rubrique("*"), qualificateurs(""){};
  void updateValeursRubrique(ValeurRubrique* vr);
  void updateTables(ValeurRubrique* vr);
  void updateTables(NomRubrique* nr);
  void updateTables(Qualificateur* q);
  void updateQualificateurs(Qualificateur* q);
  std::string buildRequete() const;

};

#endif

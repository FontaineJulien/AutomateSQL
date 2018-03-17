#include "requete.h"

using namespace std;

void Requete::updateValeursRubrique(const std::string& val){
  if(valeurs_rubrique.compare("*") == 0){
    valeurs_rubrique = val;
  } else {
    valeurs_rubrique += ", " + val;
  }
}

void Requete::updateTables(const std::string& nom) {
  tables += nom;
}

void Requete::updateQualificateurs(const std::string& champ, const std::string& valeur) {
  if(qualificateurs.compare("") == 0) {
    qualificateurs += champ + " = \"" + valeur + "\"";
  } else {
    qualificateurs += " AND " + champ + " = \"" + valeur + "\"";
  }
}

string Requete::buildRequete() const {
  if(qualificateurs.compare("") == 0) {
    return "SELECT " + valeurs_rubrique + " FROM " + tables + ";";
  } else {
    return "SELECT " + valeurs_rubrique + " FROM " + tables + " WHERE " + qualificateurs +";";
  }
}

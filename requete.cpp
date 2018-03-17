#include "requete.h"

#include "valeurRubrique.h"
#include "nomRubrique.h"
#include "qualificateur.h"

using namespace std;

string Requete::buildRequete() const {
  string str_tables = "";
  for(set<string>::const_iterator it = tables.begin(); it != tables.end(); ++it){
    if(str_tables.compare("") == 0) {
      str_tables += *it;
    } else {
      str_tables += ", " + *it;
    }
  }

  if(qualificateurs.compare("") == 0) {
    return "SELECT " + valeurs_rubrique + " FROM " + str_tables + ";";
  } else {
    return "SELECT " + valeurs_rubrique + " FROM " + str_tables + " WHERE " + qualificateurs + ";";
  }
}

void Requete::updateValeursRubrique(ValeurRubrique* vr) {
  if(valeurs_rubrique.compare("*") == 0){
    valeurs_rubrique = vr->getNomChamp();
  } else {
    valeurs_rubrique += ", " + vr->getNomChamp();
  }
}

void Requete::updateTables(ValeurRubrique* vr) {
  tables.insert(vr->getNomTable());
}

void Requete::updateTables(NomRubrique* nr) {
  tables.insert(nr->getNomTable());
}

void Requete::updateTables(Qualificateur* q) {
  tables.insert(q->getNomTable());
}

void Requete::updateQualificateurs(Qualificateur* q) {
  if(qualificateurs.compare("") == 0) {
    qualificateurs += q->getNomChamp() + " = \"" + q->getMot() + "\"";
  } else {
    qualificateurs += " AND " + q->getNomChamp() + " = \"" + q->getMot() + "\"";
  }
}

#ifndef __ETAT__
#define __ETAT__

#include <iostream>
#include <map>
#include <string>

class InterfaceMot;

class Etat {

private:
  unsigned int etiquette;
  bool is_final;
  bool is_initial;
  std::map<std::string,Etat*> transitions;

public:
  Etat(unsigned int etiquette, bool is_initial=false, bool is_final=false);

  Etat* doTransition(const std::string& type_mot) const;

  unsigned int getEtiquette() const { return etiquette; };
  void setTransition(std::string type_mot, Etat* etat) { transitions.insert(std::pair<std::string,Etat*>(type_mot,etat)); };
  void printTransitions() const;

};

#endif

#ifndef __ETAT__
#define __ETAT__

#include <iostream>
#include <map>

class InterfaceMot;

class Etat {

private:
  unsigned int etiquette;
  bool is_final;
  bool is_initial;
  std::map<InterfaceMot*,Etat*> transitions;

public:
  Etat(unsigned int etiquette, bool is_initial=false, bool is_final=false);

  Etat* doTransition(InterfaceMot* mot) const;

  unsigned int getEtiquette() const { return etiquette; };
  void setTransition(InterfaceMot* mot, Etat* etat) { transitions.insert(std::pair<InterfaceMot*,Etat*>(mot,etat)); };

};

#endif

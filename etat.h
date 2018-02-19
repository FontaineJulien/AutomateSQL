#ifndef __ETAT__
#define __ETAT__

#include <iostream>
#include <map>

class Etat {

private:
  unsigned int etiquette;
  bool is_final;
  bool is_initial;
  std::map<std::string,Etat*> transitions;

public:
  Etat(unsigned int etiquette, bool is_initial=false, bool is_final=false);

  Etat* doTransition(const std::string& word) const;

  unsigned int getEtiquette() const { return etiquette; };
  void setTransition(const std::string& word, Etat* etat) { transitions.insert(std::pair<std::string,Etat*>(word,etat)); };

};

#endif

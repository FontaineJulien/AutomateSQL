#ifndef __AUTOMATE__
#define __AUTOMATE__

#include <iostream>
#include "etat.h"
#include "interfaceMot.h"
#include <vector>

class Automate {

private:
  std::vector<InterfaceMot*> alpha; 		// Alphabet
  std::vector<Etat*> autom; // Etats de l'automate
  Etat* current; // Etat courant

  InterfaceMot* find(const std::string& str_mot);

public:
  Automate();

  Etat* getCurrent() const { return current; };

  void transition(const std::string& str_mot);
  void loadAlpha(char* inputFile);
  void loadAutomate(char* inputFile);
};

std::string to_lower(const std::string& str);

#endif

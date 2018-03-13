#ifndef __AUTOMATE__
#define __AUTOMATE__

#include <iostream>
#include "etat.h"
#include "interfaceMot.h"
#include <vector>

class Automate {

private:
  std::vector<InterfaceMot*> alpha; 		// Alphabet
  Etat* current; // Etat courant

public:
  Automate();
  void transition(InterfaceMot* mot);
  void loadAlpha(char* inputFile);
  void loadAutomate(char* inputFile);
};

#endif

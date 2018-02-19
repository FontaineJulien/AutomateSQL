#ifndef __AUTOMATE__
#define __AUTOMATE__

#include <iostream>
#include "etat.h"

class Automate {

private:
  std::string alpha[256]; 		// Alphabet
  Etat* current; // Etat courant

public:
  Automate(std::string file);
  void transition(const std::string & word);
};




#endif

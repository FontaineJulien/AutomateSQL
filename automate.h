#ifndef __AUTOMATE__
#define __AUTOMATE__

#include <iostream>
#include "etat.h"

class Automate {

private:
  std::string alpha[256]; 		// alphabet

public:
  Automate(std::string file);
  int transition(const unsigned int etat, const std::string & word) const;
};




#endif

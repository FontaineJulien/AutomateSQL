#include "automate.h"

using namespace std;

Automate::Automate(string file){
  Etat e;
}

int Automate::transition(const unsigned int etat, const string & word) const {
  cout << etat << " " << word << endl;
}

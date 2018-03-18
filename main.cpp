#include <iostream>
#include<cstdlib>

#include "automate.h"

using namespace std;

int main(int argc, char* argv[]){

  if(argc != 2) {
    cerr << "Nombre d'argument invalide" << endl;
    exit(1);
  }

  Automate autom = Automate();
  cout << autom.start(argv[1]) << endl;

  return 0;
}

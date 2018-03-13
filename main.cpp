#include <iostream>
#include "automate.h"

using namespace std;

int main(int argc, char* argv[]){

  Automate autom = Automate();
  autom.loadAlpha((char *)"dico.txt");

  return 0;
}

#include <iostream>
#include "automate.h"

using namespace std;

int main(int argc, char* argv[]){

  Automate autom = Automate();
  autom.loadAlpha((char*)"dico.txt");
  autom.loadAutomate((char*)"auto1.txt");

  autom.transition("Quels");
  autom.transition("sont");
  autom.transition("les");
  autom.transition("etudiants");
  autom.transition("?");

  return 0;
}

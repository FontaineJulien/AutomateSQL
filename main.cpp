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
  autom.transition("nom");
  autom.transition("prenom");
  autom.transition("de");
  autom.transition("m1_info");
  autom.transition("?");

  cout << autom.getRequete() << endl;

  return 0;
}

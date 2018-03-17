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
  /*autom.transition("noms");
  autom.transition("et");
  autom.transition("prenoms");
  autom.transition("des");*/
  autom.transition("etudiants");
  autom.transition("de");
  autom.transition("bac_+5");
  autom.transition("?");

  cout << autom.getRequete() << endl;

  return 0;
}

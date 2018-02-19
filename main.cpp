#include <iostream>
#include "automate.h"

using namespace std;

int main(int argc, char* argv[]){

  Automate autom = Automate("test.txt");

  autom.transition("Quel");

  return 0;
}

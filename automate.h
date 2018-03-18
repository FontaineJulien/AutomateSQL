#ifndef __AUTOMATE__
#define __AUTOMATE__

#include <iostream>
#include <vector>

#include "etat.h"
#include "interfaceMot.h"
#include "requete.h"

class Automate {

private:
  std::vector<InterfaceMot*> alpha; 		// Alphabet
  std::vector<Etat*> autom; // Etats de l'automate
  Etat* current; // Etat courant
  Requete* requete;

  InterfaceMot* find(const std::string& str_mot);
  void transition(const std::string& str_mot);
  void loadAlpha(char* inputFile);
  void loadAutomate(char* inputFile);
  std::string getRequete() const { return requete->buildRequete(); };

public:
  Automate();
  std::string start(std::string str);

};

std::string to_lower(const std::string& str);

#endif

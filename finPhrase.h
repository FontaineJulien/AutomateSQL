#ifndef __FIN_PHRASE__
#define __FIN_PHRASE__

#include "requete.h"
#include "etat.h"
#include "interfaceMot.h"

class FinPhrase : public InterfaceMot {

public:
  FinPhrase(std::string mot) : InterfaceMot(mot,"fin") {};
  void updateRequete(Requete requete, Etat etat);

};

#endif

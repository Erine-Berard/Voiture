#ifndef __RENAULT__
#define __RENAULT__

#include "Voiture.h"
#include "Date.h"
#include <string>


class Renault : public Voiture{
private:
	bool radarRecul;
	bool portVelo;
public:
	Renault(std::string nomVoiture, int vitesse, Date dateImmat, int nombrePlace, bool radarRecul, bool portVelo);
	~Renault();

	void CalculPrix();
};


#endif

#include "Renault.h"

using namespace std;

Renault::Renault(string nomVoiture, int vitesse, Date dateImmat, int nombrePlace, bool radarRecul, bool portVelo)
	:Voiture(nomVoiture, vitesse, dateImmat, nombrePlace), radarRecul(radarRecul), portVelo(portVelo)
{
	CalculPrix();
}


Renault::~Renault(){}

void Renault::CalculPrix() {
	prix += 3500;

	if (radarRecul) {
		prix += 2650;
	}
	else if (portVelo) {
		prix += 890;
	}
}
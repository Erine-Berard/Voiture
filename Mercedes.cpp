#include "Mercedes.h"

using namespace std;

Mercedes::Mercedes(string nomVoiture, int vitesse, Date dateImmat, int nombrePlace, bool ABS, bool climatisation, bool siegeEnfant)
	:Voiture(nomVoiture, vitesse, dateImmat, nombrePlace), ABS(ABS), climatisation(climatisation), siegeEnfant(siegeEnfant)
{
	CalculPrix();
}

Mercedes::~Mercedes(){}

void Mercedes::CalculPrix() {
	prix += 5000;

	if (ABS) {
		prix += 500;
	}
	else if (climatisation) {
		prix += 1000;
	}
	else if (siegeEnfant) {
		prix += 1350;
	}
}
#ifndef __MERCEDES__
#define __MERCEDES__

#include "Voiture.h"
#include "Date.h"
#include <string>


class Mercedes: public Voiture {
private:
	bool ABS;
	bool climatisation;
	bool siegeEnfant;

public:
	Mercedes(std::string nomVoiture, int vitesse, Date dateImmat, int nombrePlace, bool ABS, bool climatisation, bool siegeEnfant);
	~Mercedes();

	virtual void CalculPrix();
};



#endif
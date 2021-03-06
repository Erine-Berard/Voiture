#ifndef __VOITURE__
#define __VOITURE__

#include "Date.h"
#include <string>
#include <iostream>


class Voiture{
protected:
	std::string nomVoiture;
	int vitesse;
	Date dateImmat;
	int nombrePlace;
	int prix; 

public:

	Voiture();
	Voiture(std::string nomVoiture, int vitesse, Date dateImmat, int nombrePlace);

	~Voiture();

	void getNom(std::string nomVoiture);
	void getVitesse(int vitesse);
	void getDateImmat(Date dateImmat);
	void getNombrePlace(int nombrePlace);
	void getPrix(int prix);

	void accelerer(int v);
	void freiner(int v);

	void afficher();

	void calculPrix(int anneeAcctuel = 2021);
};

#endif 


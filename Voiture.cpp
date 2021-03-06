#include "Voiture.h"

using namespace std;

Voiture::Voiture() {}

Voiture::Voiture(string nomVoiture, int vitesse, Date dateImmat, int nombrePlace)
	: nomVoiture(nomVoiture), vitesse(vitesse), dateImmat(dateImmat), nombrePlace(nombrePlace) 
{
	calculPrix();
}

Voiture::~Voiture(){}



void Voiture::getNom(std::string nomVoiture) {
	this->nomVoiture = nomVoiture;
	return;
}

void Voiture::getVitesse(int vitesse) {
	this->vitesse = vitesse;
	return;
}

void Voiture::getDateImmat(Date dateImmat) {
	this->dateImmat = dateImmat;
	return;
}

void Voiture::getNombrePlace(int nombrePlace) {
	this->nombrePlace = nombrePlace;
	return;
}

void Voiture::getPrix(int prix) {
	this->prix = prix;
	return;
}



void Voiture::accelerer(int v) {
	vitesse += v;
	return;
}
void Voiture::freiner(int v) {
	if (v >= vitesse) {
		vitesse = 0;
	}else{
	vitesse -= v;
	}
	return;
}



void Voiture::afficher(){
	cout << endl << "Parramètre de notre voiture : " << endl
		<< "Nom : " << nomVoiture << endl
		<< "Vitesse : " << vitesse << endl
		<< "Date d'immatriculation : " << dateImmat.afficher () << endl
		<< "Nombre de place : " << nombrePlace << endl
		<< "Prix : " << prix << endl << endl;
}



void Voiture::calculPrix(int anneeAcctuel){
	int diff = anneeAcctuel - dateImmat.getAAAA();

	if (diff < 1) {
		this->prix = 25000;
		return;
	}
	else if (diff < 3) {
		this->prix = 20000;
		return;
	}
	else if (diff > 3) {
		this->prix = 15000;
		return;
	}
}
#include "Date.h"
#include "Mercedes.h"
#include "Renault.h"
#include "Voiture.h"

#include <string>
#include <iostream>
#include <list>

using namespace std;

void creatVoiture(int nombreVoiture) {
	list<Voiture*> listeVoiture;

	for (int i=0; i<nombreVoiture; i++){
		char na;
		cout << "Esce que la voiture est une Mercedes (m) ou elle est une Renault (r) ou rien (n) :";
		cin >> na;

		if (na == 'm') {
			string nomVoiture;
			int vitesse;
			int nombrePlace;

			cout << endl << "Nom voiture : ";
			cin >> nomVoiture;

			cout << endl << "Vitesse : ";
			cin >> vitesse;

			cout << endl << "Nombre de Place : ";
			cin >> nombrePlace;

			int JJ;
			int MM;
			int AAAA;

			cout << endl << "Jour de l'immatriculation : ";
			cin >> JJ;

			cout << endl << "Mois de l'immatriculation : ";
			cin >> MM;

			cout << endl << "Anee de l'immatriculation : ";
			cin >> AAAA;

			Date dateImmat(JJ, MM, AAAA);

			bool ABS = 0;
			bool climatisation = 0;
			bool siegeEnfant = 0;

			cout << endl << "Esce qu'elle a l'ABS: (si oui=1 sinon 0) ";
			cin >> ABS;

			cout << endl << "Esce qu'elle a la climatisation : (si oui=1 sinon 0) ";
			cin >> climatisation;

			cout << endl << "Esce qu'elle a le siege Enfant: (si oui=1 sinon 0) ";
			cin >> siegeEnfant;

			listeVoiture.push_back(new Mercedes(nomVoiture, vitesse, dateImmat, nombrePlace, ABS, climatisation, siegeEnfant));

			cout << "Vous avez creer la voiture " << i + 1 << endl;


		}
		else if (na == 'r') {
			string nomVoiture;
			int vitesse;
			int nombrePlace;

			cout << endl << "Nom voiture : ";
			cin >> nomVoiture;

			cout << endl << "Vitesse : ";
			cin >> vitesse;

			cout << endl << "Nombre de Place : ";
			cin >> nombrePlace;

			int JJ;
			int MM;
			int AAAA;

			cout << endl << "Jour de l'immatriculation : ";
			cin >> JJ;

			cout << endl << "Mois de l'immatriculation : ";
			cin >> MM;

			cout << endl << "Anee de l'immatriculation : ";
			cin >> AAAA;

			Date dateImmat(JJ, MM, AAAA);

			bool radarRecul = 0;
			bool portVelo = 0;

			cout << endl << "Esce qu'elle a le radar de recul : (si oui=1 sinon 0) ";
			cin >> radarRecul;

			cout << endl << "Esce qu'elle a l'le part velo: (si oui=1 sinon 0) ";
			cin >> portVelo;

			listeVoiture.push_back(new Renault(nomVoiture, vitesse, dateImmat, nombrePlace, radarRecul, portVelo));

			cout << "Vous avez creer la voiture " << i + 1 << endl;
		}
		else if (na == 'n') {
			string nomVoiture;
			int vitesse;
			int nombrePlace;

			cout << endl << "Nom voiture : ";
			cin >> nomVoiture;

			cout << endl << "Vitesse : ";
			cin >> vitesse;

			cout << endl << "Nombre de Place : ";
			cin >> nombrePlace;

			int JJ;
			int MM;
			int AAAA;

			cout << endl << "Jour de l'immatriculation : ";
			cin >> JJ;

			cout << endl << "Mois de l'immatriculation : ";
			cin >> MM;

			cout << endl << "Anee de l'immatriculation : ";
			cin >>AAAA;

			Date dateImmat(JJ, MM, AAAA);

			listeVoiture.push_back(new Voiture(nomVoiture, vitesse, dateImmat, nombrePlace));

			cout << "Vous avez creer la voiture " << i + 1 << endl;

		}
		else {
			cout << endl << "Erreur, la saisi a ete anule !";
			break;
		}
		
	}
}


int main() {
    
	Date immat1(23, 04, 2000);
	Date immat2(23, 04, 2019);
	Date immat3(23, 01, 2020);

	Mercedes voiture1("voitur1", 23, immat1, 5, true , true, true);
	Renault voiture2("voiture2", 45, immat2, 5, 0, 1);
	Voiture voiture3("voiture3", 12, immat3, 5);

	voiture1.accelerer(14);
	voiture1.freiner(2);

	voiture2.accelerer(34);
	voiture2.freiner(26);

	voiture3.accelerer(84);
	voiture3.freiner(27);

	voiture1.afficher();
	voiture2.afficher();
	voiture3.afficher();
	
	creatVoiture(3);

	return 0;

}
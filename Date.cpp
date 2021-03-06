#include "Date.h"

using namespace std;

Date::Date(){}
Date::Date(int JJ, int MM, int AAAA):JJ(JJ),MM(MM),AAAA(AAAA){}
Date::~Date(){}

int Date::getJJ() {
	return JJ;
}
int Date::getMM() {
	return MM;
}
int Date::getAAAA() {
	return AAAA;
}

string Date::afficher() {

	stringstream ss;

	ss << JJ << "/" << MM << "/" << AAAA;

	string result = ss.str();

	return result;

}

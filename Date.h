#ifndef __date__
#define __date__

#include <string>
#include <iostream>
#include <sstream>


class Date
{
private:
	int JJ;
	int MM;
	int AAAA;
public:

	Date();
	Date(int JJ, int MM, int AAAA);
	~Date();

	int getJJ();
	int getMM();
	int getAAAA();

	std::string afficher();


};


#endif


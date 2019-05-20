//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXIX
// Versuch 1.1: Datentypen und Typumwandlung
//
// Datei:  Variablen.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

int main()
{

	/*
	 * Versuch 1.6.1
	 */

    int iErste = 0;
    int iZweite = 0;

    //1
    int iSum,iQuot;
    //2
    double dSum,dQuot;
    //3
    double dSumCast,dQuotCast;
    //4
    string sVorname,sNachname,sVornameNachname,sNachnameVorname;
    //6
    int name1,name2;
    

    // Hier folgt Ihr eigener Code
    
    /*
     * Teil 1
     */

    std::cout << "Start des Programmes:";
    std::cout << "Mit Integern" << std::endl;
    std::cout << "Eingeben der ersten Zahl:";
    std::cin >> iErste;
    std::cout << "Eingeben der zweiten Zahl:";
    std::cin >> iZweite;
    std::cout << "Warten auf Ausgabe....." << std::endl;

    iSum = iErste + iZweite;
    iQuot = iErste / iZweite;

    std::cout << "Ausgabe der Summe:";
    std::cout << iSum << std::endl;
    std::cout << "Ausgabe des Quotienten:";
    std::cout << iQuot << std::endl;


    /*
     * Teil 2
     */


    dSum  = iErste + iZweite;
    dQuot = iErste / iZweite;

    std::cout << "Mit Double-Ergebnissen" << std::endl;
    std::cout << "Ausgabe der Summe:";
	std::cout << dSum << std::endl;
	std::cout << "Ausgabe des Quotienten:";
	std::cout << dQuot << std::endl;

	/*
	 * Teil 3
	 */

	dSumCast  = (double)iErste + (double)iZweite;
	dQuotCast = (double)iErste / (double)iZweite;

	std::cout << "Mit Double-Cast-Ergebnissen" << std::endl;
	std::cout << "Ausgabe der Summe:";
	std::cout << (double)dSumCast << std::endl;
	std::cout << "Ausgabe des Quotienten:";
	std::cout << (double)dQuotCast << std::endl;

	/*
	 * Teil 4
	 */

	std::cout << "Nutzereingabe:" << std::endl;
	std::cout << "Vorname:";
	std::cin >> sVorname;
	std::cout << "Nachname:";
	std::cin >> sNachname;
	std::cout << "Gesamtausgabe:";

	sVornameNachname = sVorname +" "+ sNachname;
	sNachnameVorname = sNachname +" "+ sVorname;

	std::cout << "Vorname, Nachname:" << std::endl;
	std::cout << sVornameNachname << std::endl;
	std::cout << "Nachname, Vorname:" << std::endl;
	std::cout << sNachnameVorname << std::endl;

	/*
	 * Teil 5
	 */

	//a)
	{

	int iFeld[2];
	iFeld[0] = 1;
	iFeld[1] = 2;

	std::cout << iFeld[0] << std::endl;
	std::cout << iFeld[1] << std::endl;

	}

	//b)
	{

	int iSpielfeld[2][3];// = {{1,2,3},{4,5,6}};

		for (int i = 0; i<2; i++){
			for (int j = 0; j<3; j++){
				if(i<1){
					int k = i+j+1;
					iSpielfeld[i][j] = k;
				}
				else if(i>=1){
					int k = i+j+3;
					iSpielfeld[i][j] = k;
				}
			}
		}

		for (int l = 0; l<2; l++){
			for (int m = 0; m<3; m++){
				std::cout << iSpielfeld[l][m];
				std::cout << " ";
			}
			std::cout << "" << std::endl;
		}

	}

	//c)
	{
		const int iZweite = 1;
		std::cout << "Ausgabe iZweiter im Block: " ;
		std::cout << iZweite << std::endl;
	}

	std::cout << "Ausgabe iZweiter nach dem Block: " ;
	std::cout << iZweite << std::endl;

	/*
	 * Teil 6
	 */

	name1 = (int)sVorname[0];
	name2 = (int)sNachname[0];

	std::cout << "Ausgabe Vorname erster Buchstabe: " ;
	std::cout << name1 << std::endl;
	std::cout << "Ausgabe Nachname erster Buchstabe: " ;
	std::cout << name2 << std::endl;

	/*
	 * Teil 7
	 */

	if((name1 >=64)&&(name1 <= 90)){
		std::cout << "Stelle im Alphabet Vorname erster Buchstabe: " ;
		std::cout << name1-64 << std::endl;
	}
	else if((name1 >=97)&&(name1 <= 122)){
		std::cout << "Stelle im Alphabet Vorname erster Buchstabe: " ;
		std::cout << name1-96 << std::endl;
	}
	else{
		std::cout << "1. Buchstabe im Vornamen invalid." << std::endl;
	}

	if((name2 >=64)&&(name2 <= 90)){
		std::cout << "Stelle im Alphabet Nachname erster Buchstabe: " ;
		std::cout << name2-64 << std::endl;
	}
	else if((name2 >=97)&&(name2 <= 122)){
		std::cout << "Stelle im Alphabet Nachname erster Buchstabe: " ;
		std::cout << name2-96 << std::endl;
	}
	else{
		std::cout << "1. Buchstabe im Nachnamen invalid." << std::endl;
	}

    return 0;
    
}

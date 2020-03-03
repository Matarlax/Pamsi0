#pragma once
#include <cstdlib>
#include <iostream>
using namespace std;

/**
 * Tworzy klas� triangle zawieraj�c� 
 * nazw� i parametry tr�jk�ta.
 * @param a pierwszy bok
 * @param b drugi bok
 * @param c trzeci bok
 * @param name nazwa tr�jk�ta
 * @fn circuit zwraca sum� bok�w
 */
class Triangle {
public:
    string name;
    int a, b, c;
    int circuit() { return a + b + c; }
};

/**
 * Przeci��enie operatora << dla obiektu klasy triangle.
 * @param tr�jk�t
 * @return parametry tr�jk�ta
*/
ostream& operator << (ostream& strm, Triangle T)
{
    strm << "Trojkat: " << T.name << " " << T.circuit() << endl << endl;
    return strm;
}
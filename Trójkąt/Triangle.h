#pragma once
#include <cstdlib>
#include <iostream>
using namespace std;

/**
 * Tworzy klasê triangle zawieraj¹c¹ 
 * nazwê i parametry trójk¹ta.
 * @param a pierwszy bok
 * @param b drugi bok
 * @param c trzeci bok
 * @param name nazwa trójk¹ta
 * @fn circuit zwraca sumê boków
 */
class Triangle {
public:
    string name;
    int a, b, c;
    int circuit() { return a + b + c; }
};

/**
 * Przeci¹¿enie operatora << dla obiektu klasy triangle.
 * @param trójk¹t
 * @return parametry trójk¹ta
*/
ostream& operator << (ostream& strm, Triangle T)
{
    strm << "Trojkat: " << T.name << " " << T.circuit() << endl << endl;
    return strm;
}
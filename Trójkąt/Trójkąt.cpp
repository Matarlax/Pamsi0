/**
 * Trójkąt.cpp
 * Purpose: Czytanie parametrów trójkątów z pliku
 * i wyświetlanie ich
 * @author Mateusz Kubiak
 * @version 1.0 03/03/2020
 */
#include <fstream>
#include <string>
#include <vector>
#include "Triangle.h"

int main()
{
    vector<Triangle> triangleVector;
    Triangle triangle;
    ifstream file;
    file.open("Trojkaty1.txt");
    if (!file) 
    {
        cerr << "Nie ma takiego pliku." << endl;
        return 1;
    }
    while (!file.eof()) 
    {
        file >> triangle.name >> triangle.a >> triangle.b >> triangle.c;
        triangleVector.push_back(triangle);
    }
    for (int i = 0; i < triangleVector.size(); i++) cout << triangleVector[i];
    file.close();
    return 0;
}
#include <iostream>

using namespace std;
/* Ingresar la base y el exponente y determinar la potencia usando el ciclo for */
int main()
{ int base, expo, potencia;

cout << "Ingresar base:";
cin >> base;

cout << "Ingresar exponente:";
cin >> expo;

potencia=1;

for (int i=0;i<expo;i++)
{
    potencia=potencia*base;
}

cout << "La potencia es:" << potencia << "\n";
    return 0;
}

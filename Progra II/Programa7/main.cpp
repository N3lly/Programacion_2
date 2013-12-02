#include <iostream>

using namespace std;
/* Ingresar el nombre del alumno y determinar la nota final y ajustarla a 60 si esta entre 57 y 59.
*/
int main()
{ char nombre[30];
int notaA, notaE, notaF;
    cout << "Ingresar nombre del alumno:";
    cin.getline(nombre,30);

    cout << "Ingresar nota Acumulada:";
    cin >> notaA;

    cout << "Ingresar nota Examen:";
    cin >> notaE;

    notaF= notaA + notaE;

    if ((notaF>=57) and (notaF<=60))
    {
        notaF=60;
    }

    cout << "La nota final es:" << notaF <<"\n";
    return 0;
}

#include <iostream>

using namespace std;
/*
Los parametros de valor no reflejan los cambios que tienen en un procedimiento
en el main,
pero los de variable si reflejan todos los cambios que hayan sufrido
*/

void Calcular(int &sueldo, int &ihss)
{
    if (sueldo>7000)
        ihss=245;
    else
        ihss=sueldo*0.035;

        sueldo=sueldo*1.20;
}
int main()
{
    int sueldo;
    int ihss;

    cout << "Ingresar sueldo:";
    cin >> sueldo;

    Calcular(sueldo,ihss);

    cout << "Sueldo:" << sueldo << "\n";
    cout << "ihss:" << ihss << "\n";

    return 0;
}

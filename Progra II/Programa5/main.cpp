#include <iostream>

using namespace std;
/*
Se tiene que ingresar la nota del alumno y el programa debera de presentar la observacion
usando la siguiente tabla:
1-59 reprobado
60-80 bueno
91-90 muy bueno
91-100 sobresaliente
*/
int main()
{ int nota;
    cout << "Ingresar nota del alumno:";
    cin >> nota;

    if (nota<60)
    {
        cout << "REPROBADO"<<"\n";
    }
    else if (nota<81)
    {
        cout << "BUENO"<<"\n";
    }
    else if (nota<91)
    {
        cout << "MUY BUENO"<<"\n";
    }
    else
    {
        cout << "SOBRESALIENTE"<<"\n";
    }
    cout<<"\n";
    return 0;
}

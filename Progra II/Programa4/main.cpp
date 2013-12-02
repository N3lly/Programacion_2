#include <iostream>

using namespace std;
/* Determinar si un numero es mayor, menor o igual a cero.
*/
int main()
{ int numero;
    cout << "Ingresar un mumero:";
    cin >> numero;


    if (numero<0)
    {
        cout << "El numero es negativo"<<"\n";
    }
    else if (numero>0)
    {
        cout << "El numero es positivo"<<"\n";
    }
    else
    {
        cout << "El numero es 0"<<"\n";
    }
    cout<<"\n";
    return 0;
}

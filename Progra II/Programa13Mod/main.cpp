#include <iostream>

using namespace std;

int main()
{ int numero, cdiv3, promedio, suma;
    cdiv3=0;
    suma=0;

    for (int i=0;i<5;i++)
    {
        cout << "Ingresar un nunmero entero:";
        cin >> numero;

        if ((numero % 3)==0)
        {
            cdiv3++;
            suma+=numero;
        }
    }

    if(suma!=0)
    {
        promedio=suma/cdiv3;
    }
    else
    {
        promedio=0;
    }

    cout << "Los numeros divisibles entre 3 son:" << cdiv3 << "\n";
    cout << "El promedio de los numeros divisibles entre 3 es:" << promedio << "\n";
    return 0;
}

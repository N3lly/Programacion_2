#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{char resp;
int numero, Nmayor, Nmenor;
Nmayor=0;
Nmenor=1000000;

do
    {

        cout << "Ingresar un numero par entre 50 y 150:";
        cin >> numero;

        if ((numero%2)==0)
        {
            cout << "El numero que ingreso es par" << "\n";

        }
            else
            {
                cout << "El numero que ingreso no es par" << "\n";
            }

                if ((numero<50) or (numero>150))
                {
                    cout << "El numero no esta dentro del rango establecido" << "\n";
                }

                    if (numero>Nmayor)
                    {
                        Nmayor=numero;
                    }

                        else if (numero<Nmenor)
                        {
                            Nmenor=numero;
                        }

                                do
                                {
                                    cout << "Desea continuar ...:";
                                cin.get(resp);
                                _flushall();

                               } while ((resp !='S') and  (resp !='N'));
_flushall();

} while (((numero%2)==0 and resp =='S') and ((numero>49) and (numero<151)));



cout << "El numero mayor es:" << Nmayor << "\n";
cout << "El numero menor es:" << Nmenor << "\n";




















    return 0;
}

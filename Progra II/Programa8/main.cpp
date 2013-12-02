#include <iostream>

using namespace std;

int main()
{ char nombre[30];
int notaF;

    cout << "Ingresar el nombre del alumno:";
    cin.getline(nombre,30);

    cout << "Ingresar nota del alumno:";
    cin >> notaF;

    if ((notaF>=1) and (notaF<=59))
    {
        cout << "REPROBADO" << "\n";
    }
        else if ((notaF>=60) and (notaF<=80))
        {
            cout << "BUENO" << "\n";
        }
            else if ((notaF>=81) and (notaF<=90))
            {
                cout << "MUY BUENO" << "\n";
            }
                else if ((notaF>=91) and (notaF<=100))
                {
                    cout << "SOBRESALIENTE" << "\n";
                }
                    else
                    {
                        cout << "La nota es incorrecta" << "\n";
                    }
            cout << "\n";
    return 0;
}

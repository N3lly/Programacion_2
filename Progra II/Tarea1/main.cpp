#include <iostream>

using namespace std;

int main()
{ int dia, mes, ano;

    cout << "Ingresar dia:";
    cin >> dia;

    cout << "Ingresar mes:";
    cin >> mes;

    cout << "Ingresar año:";
    cin >> ano;

    if (ano>=1)
    {
        cout << "El año es correcto" << "\n";
    }
    else
    {
        cout << "El año es incorrecto" << "\n";
    }

    if ((mes>=1) and (mes<=12))
    {
        cout << "El mes es correcto" << "\n";
    }
    else
    {
        cout << "El mes es incorrecto" << "\n";
    }

    if (((mes==2) and ((dia>=1) and (dia<=29))) or (((mes==1) or (mes==3) or (mes==5) or (mes==7) or (mes==8) or (mes==10) or (mes==12))
        and ((dia>=1) and (dia<=31))) or (((mes==4) or (mes==6) or (mes==9) or (mes==11))
        and ((dia>=1) and (dia<=30))))
    {
        cout << "El dia es correcto" << "\n";
    }
    else
    {
        cout << "El dia es incorrecto" << "\n";
    }

    cout << "\n";
    return 0;
}

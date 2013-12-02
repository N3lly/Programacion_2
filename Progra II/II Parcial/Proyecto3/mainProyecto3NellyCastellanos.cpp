#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

int dia, mes, cAcuario, cPiscis, cAries, cTauro, cGeminis, cCancer, cLeo, cVirgo, cLibra, cEscorpion,
cSagitario, cCapricornio;

void Ingresar(int &dia, int &mes)
{
    do
    {
        cout << "Ingresar dia de nacimiento:";
        cin >> dia;
    }while ((dia<1) or (dia>31));

        do
        {
            cout << "Ingresar mes de nacimiento:";
            cin >> mes;
        }while ((mes<1) or (mes>12));

}

void Asignar(int dia, int mes, int &cAcuario, int &cPiscis, int &cAries, int &cTauro, int &cGeminis, int &cCancer, int &cLeo, int &cVirgo, int &cLibra, int &cEscorpion,
int &cSagitario, int &cCapricornio)
{
    if (((dia>20) and (mes==1)) or ((dia<19) and (mes==2)))
    {
        cout << "Signo Zodiacal: Acuario" << "\n";
        cAcuario++;
    }
            else if (((dia>18) and (mes==2)) or ((dia<21) and (mes==3)))
            {
                cout << "Signo Zodiacal: Piscis" << "\n";
                cPiscis++;
            }
                  else if (((dia>20) and (mes==3)) or ((dia<21) and (mes==4)))
                {
                    cout << "Signo Zodiacal: Aries" << "\n";
                    cAries++;
                }
                      else if (((dia>20) and (mes==4)) or ((dia<22) and (mes==5)))
                    {
                        cout << "Signo Zodiacal: Tauro" << "\n";
                        cTauro++;
                    }
                          else if (((dia>21) and (mes==5)) or ((dia<22) and (mes==6)))
                        {
                            cout << "Signo Zodiacal: Geminis" << "\n";
                            cGeminis++;
                        }
                              else if (((dia>21) and (mes==6)) or ((dia<23) and (mes==7)))
                            {
                                cout << "Signo Zodiacal: Cancer" << "\n";
                                cCancer++;
                            }
                                else if (((dia>22) and (mes==7)) or ((dia<24) and (mes==8)))
                                {
                                    cout << "Signo Zodiacal: Leo" << "\n";
                                    cLeo++;
                                }
                                     else if (((dia>23) and (mes==8)) or ((dia<24) and (mes==9)))
                                    {
                                        cout << "Signo Zodiacal: Virgo" << "\n";
                                        cVirgo++;
                                    }
                                          else if (((dia>23) and (mes==9)) or ((dia<24) and (mes==10)))
                                        {
                                            cout << "Signo Zodiacal: Libra" << "\n";
                                            cLibra++;
                                        }
                                              else if (((dia>23) and (mes==10)) or ((dia<23) and (mes==11)))
                                            {
                                                cout << "Signo Zodiacal: Escorpio" << "\n";
                                                cEscorpion++;
                                            }
                                                  else if (((dia>22) and (mes==11)) or ((dia<22) and (mes==12)))
                                                {
                                                    cout << "Signo Zodiacal: Sagitario" << "\n";
                                                    cSagitario++;
                                                }
                                                      else if (((dia>21) and (mes==12)) or ((dia<21) and (mes==1)))
                                                    {
                                                        cout << "Signo Zodiacal: Capricornio" << "\n";
                                                        cCapricornio++;
                                                    }
}

void Presentar(int cAcuario, int cPiscis, int cAries, int cTauro, int cGeminis, int cCancer, int cLeo, int cVirgo, int cLibra, int cEscorpion, int cSagitario, int cCapricornio)
{
    cout << "Numero de personas Acuario:" << cAcuario << "\n";
    cout << "Numero de personas Piscis:" << cPiscis << "\n";
    cout << "Numero de personas Aries:" << cAries << "\n";
    cout << "Numero de personas Tauro:" << cTauro << "\n";
    cout << "Numero de personas Geminis:" << cGeminis << "\n";
    cout << "Numero de personas Cancer:" << cCancer << "\n";
    cout << "Numero de personas Leo:" << cLeo << "\n";
    cout << "Numero de personas Virgo:" << cVirgo << "\n";
    cout << "Numero de personas Libra:" << cLibra << "\n";
    cout << "Numero de personas Escorpio:" << cEscorpion << "\n";
    cout << "Numero de personas Sagitario:" << cSagitario << "\n";
    cout << "Numero de personas Capricornio:" << cCapricornio << "\n";
}

int main()
{
    char resp;
      do
       {
       Ingresar(dia,mes);
       Asignar(dia, mes, cAcuario, cPiscis, cAries, cTauro, cGeminis, cCancer, cLeo, cVirgo, cLibra, cEscorpion, cSagitario, cCapricornio);
       _flushall();

       do
        {
        cout<<"Desea Continuar:";
        cin.get(resp);
        }while((resp!='N')and (resp!='S'));

        }while(resp!='N');
        _flushall();

        Presentar(cAcuario, cPiscis, cAries, cTauro, cGeminis, cCancer, cLeo, cVirgo, cLibra, cEscorpion, cSagitario, cCapricornio);
        cout << "\n";
    return 0;

}

#include <iostream>

using namespace std;
int num;
int factorial=1;

void ingreso(int &num)
{
    cout << "Ingresar un numero:";
    cin >> num;

}

void factorialn(int &num)
{
    for (int i=1;i<=num;i++)
    {
        factorial*=i;
    }
}

void presentar(int factorial)
{
    cout << "El factorial del numero es:" << factorial;
}

int main()
{
    ingreso(num);
    factorialn(num);
    presentar(factorial);

    return 0;
}

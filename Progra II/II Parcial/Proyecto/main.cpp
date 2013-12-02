#include <iostream>

using namespace std;

int ordenar(int[],int);
int Presentar(int[]);

int main()
{

        int i, lista[9],ord;

        for(i=0;i<5;i++)
        {
            cout<<"Numero "<<i+1<<": ";
            cin>>lista[i];
        }


  cout<<"\nAscendente 1\nDescendente 2\n--> Elija una opción: ";
  cin>>ord;

  if(ord==1 or ord==2)
  {
    ordenar(lista,ord);
    Presentar(lista);
  }
}

int ordenar(int lista[],int ord)
{
  int c1=0,c2=0,aux=0;
  for(c1=0;c1<=9;c1++)
  {
    for(c2=0;c2<9;c2++)
    {
      if(ord==1)
      {
        if(lista[c2]>lista[c2+1])
        {
          aux=lista[c2];
          lista[c2]=lista[c2+1];
          lista[c2+1]=aux;
        }
      }
      else
      {
        if(lista[c2]<lista[c2+1])
        {
          aux=lista[c2];
          lista[c2]=lista[c2+1];
          lista[c2+1]=aux;
        }
      }
    }
  }
  return 0;
}

int Presentar(int lista[])
{
int c;
  for(c=0;c<=9;c++)
    cout<<lista[c]<<" ";
  cin.get();cin.get();
}

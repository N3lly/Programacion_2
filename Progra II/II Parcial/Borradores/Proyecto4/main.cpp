#include <iostream>

using namespace std;

int ordenar(int[],int);
int imprimir(int[]);

int main()
{
  int c,lista[5],ord;
  for(c=0;c<=4;c++)
  {
    cout<<"Numero "<<c+1<<": "; cin>>lista[c];
  }
  cout<<"\nAscendente 1\nDescendente 2\n--> Opción: "; cin>>ord;
  if(ord==1 || ord==2)
  {
    ordenar(lista,ord);
    imprimir(lista);
  }
}

int ordenar(int lista[],int ord)
{
  int c1,c2,aux;
  for(c1=1;c1<5;c1++)
  {
    for(c2=1;c2<5;c2++)
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

int imprimir(int lista[])
{
int c;
  for(c=1;c<=5;c++)
    cout<<lista[c]<<" ";
  cin.get();cin.get();
}

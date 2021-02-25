#include <iostream>
#include <fstream>

using namespace std;

void dividir(int a[], int inicial, int final);
void fusionar(int a[],int pinicial,int pfinal,int medio);

int main()
{
  ofstream archivo;
  archivo.open("mergesort.txt",ios::out);
  int A[7]={38,27,43,3,9,82,10};
  archivo<<"Arreglo original: ";
  cout<<"Arreglo original: ";
  for(int i=0; i< 7; i++)
  {
    archivo<<"|"<<A[i]<<"|";
    cout<<"|"<<A[i]<<"|";
  }
  dividir(A,0,6);
  cout<<"\n"<<endl;
  archivo<<"\n"<<endl;
  archivo<<"Arreglo ordenado: ";
  cout<<"Arreglo ordenado: ";
  for(int i=0; i< 7; i++)
  {
    archivo<<"|"<<A[i]<<"|";
    cout<<"|"<<A[i]<<"|";
  }
  cout<<"\n"<<endl;
  archivo<<"\n"<<endl;
  archivo<<"\tALGORITMOS DE ORDENAMIENTO MERGESORT"<<endl;
  cout<<"\tALGORITMOS DE ORDENAMIENTO MERGESORT"<<endl;
  archivo.close();
  return 0;
}

void dividir(int a[], int inicial, int final)
{
  int mitad;
  if(inicial < final)
  {
    mitad=(inicial+final)/2;
    dividir(a,inicial,mitad);
    dividir(a,mitad+1,final);
    fusionar(a,inicial,final,mitad);
  }
}

void fusionar(int a[],int pinicial,int pfinal,int medio)
{
  int i,j,k, temp[pfinal-pinicial+1];
  i=pinicial;
  k=0;
  j=medio+1;
  while(i<=medio && j<=pfinal)
  {
    if(a[i]<a[j])
    {
      temp[k]=a[i];
      k++;
      i++;
    }
    else
    {
      temp[k]=a[j];
      k++;
      j++;
    }
  }
  while (i<=medio)
  {
    temp[k] = a[i];
    k++;
    i++;
  }
  while(j<=pfinal)
  {
    temp[k]=a[j];
    k++;
    j++;
  }
  for(i=pinicial; i<=pfinal; i++)
  {
    a[i]= temp[i-pinicial];
  }
}

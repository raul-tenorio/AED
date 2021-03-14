#include <iostream>
#include <fstream>
#include "heapsort.h"
using namespace std;

int main() {
  ofstream f;
  f.open("heapsort.txt",ios::app);
  int A[100], n;
  cout<<"Ingrese la cantidad: ";
  cin>>n;
  for(int i=0; i<n; i++)
  {
    cout<<"Ingrese el elemento N°"<<i+1<<": ";
    cin>>A[i];
  }
  f<<"\n-------------------------------------------------------------------------------------\n";
  cout<<"\nLista de elementos ordenados: ";
  f<<"\nLista de elementos ordenados: ";
  for(int i=0; i<n; i++)
  {
    cout<<"["<<A[i]<<"]";
    f<<"["<<A[i]<<"]";
  }
  cout<<endl;
  f<<endl;
  heapSort(A, n);
  cout<<"\nLista de elementos sin ordenar: ";
  f<<"\nLista de elementos sin ordenar: ";
  for(int i=0; i<n; i++)
  {
    cout<<"["<<A[i]<<"]";
    f<<"["<<A[i]<<"]";
  }
  cout<<endl;
  f<<endl;
  f<<"\nALGORITMO DE ORDENAMIENTO POR HEAPSORT\n";
  f<<"\n-------------------------------------------------------------------------------------\n";
  f.close();
}

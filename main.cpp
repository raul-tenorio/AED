#include <iostream>
#include <fstream>
using namespace std;

void heapSort(int vector[], int tam);
void heap(int vector[], int tam, int mid);

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

void heapSort(int vector[], int tam)
{
  for (int i = tam / 2 - 1; i >= 0; i--)
    heap(vector, tam, i);
  for (int i = tam - 1; i >= 0; i--)
  {
    swap(vector[0], vector[i]);
    heap(vector, i, 0);
  }
}

void heap(int vector[], int tam, int mid)
{
  int largest = mid;
  int l = 2 * mid + 1;
  int r = 2 * mid + 2;
  if (l < tam && vector[l] > vector[largest])
    largest = l;
  if (r < tam && vector[r] > vector[largest])
    largest = r;
  if (largest != mid) {
    swap(vector[mid], vector[largest]);
    heap(vector, tam, largest);
  }
}

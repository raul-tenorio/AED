#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream archivo;
  archivo.open("resultados.txt",ios::out);
  int arreglo[15][12]={2,5,4,-1,-3,-6,34,45,-3,-8,-67,-99,15,-10,5,6,7,5,4,-3,-2,5,4,7,6,8,9,54,56,76,78,34,23,45,67,25,4,5,6,4,3,4,5,3,4,5,7,8,98,76,56,43,23,23,24,56,76,8,7,8,9,-2,-4,-7,-5,-9,-11,-7,5,4,-8,9,1,5,4,3,6,5,7,-5,-8,-87,-13,-25,63,-34,54,67,5,4,3,6,7,2,8,7,6,-9,-76,76,54,34,23,54,76,8,6,5,4,3,2,89,1,-6,-99,-67,-5,-4,-3,-67,43,-56,-4,6,7,5,4,3,7,6,-3,-2,5,4,-5,-34,-56,-71,34,35,43,45,76,87,23,24,25,-6,-7,-76,-14,9,6,7,5,3,2,4,1,-15,-4,-7,-8,-45,-67,45,32,45,67,43,25,67,34,-15,6,7,3,4,5,-12};
  int menor=0, i=0, j=0, suma=0, cont=0;

  for (i=0;i<15;i++) {
    for(j=0;j<12;j++)
    {
      cout<<"["<<arreglo[i][j]<<"\t] ";
      archivo<<"["<<arreglo[i][j]<<"\t] ";
    }
    cout<<endl;
    archivo<<endl;
  }

  for (i=0;i<15;i++) {
    for(j=0;j<12;j++)
    {
      if(menor>arreglo[i][j])
      {
        menor=arreglo[i][j];
      }
    }
  }

  for (i=0;i<5;i++) {
    for(j=0;j<12;j++)
    {
      suma+=arreglo[i][j];
    }
  }

  for (i=0;i<15;i++) {
    for(j=4;j<9;j++)
    {
      if(arreglo[i][j]<0)
      {
        cont++;
      }
    }
  }

  archivo<<"\nEl menor elemento del arreglo es: "<<menor<<endl;
  archivo<<"\nLa suma de los elementos de las cinco primeras filas del arreglo es: "<<suma<<endl;
  archivo<<"\nEl total de elementos negativos en las columnas de la quinta a la nueve es: "<<cont<<endl;

  cout<<"\nEl menor elemento del arreglo es: "<<menor<<endl;
  cout<<"\nLa suma de los elementos de las cinco primeras filas del arreglo es: "<<suma<<endl;
  cout<<"\nEl total de elementos negativos en las columnas de la quinta a la nueve es: "<<cont<<endl;

  archivo.close();
  return 0;
}

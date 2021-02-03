#include <iostream>
#include <fstream>
using namespace std;

void ingresarDatos(string nombreArchivo);
void mostrarDatos(string nombreArchivo);

int main() {
  int op;
  string nombreArchivo;
  do
  {
    cout<<"Opciones"<<endl;
    cout<<"1. Ingresar datos"<<endl;
    cout<<"2. Mostrar datos"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Ingrese el numero de su opcion: ";
    cin>>op;
    switch (op)
    {
      case 1:
      //cin.ignore();
      while(getchar()!='\n');
      cout<<"Ingrese el nombre del archivo: ";
      getline(cin,nombreArchivo);
      ingresarDatos(nombreArchivo);
      break;
      case 2:
      //cin.ignore();
      while(getchar()!='\n');
      mostrarDatos(nombreArchivo);
      break;
      case 3:
      cout<<"HASTA PRONTO!";
      break;
      default:
      cout<<"Esta opcion no existe! Por favor, vuelva a ingresar";
      break;
    }
  }
  while(op!=3);
}

void ingresarDatos(string nombreArchivo)
{
  string nombre, apellido, carrera;
  int edad;
  char r;
  ofstream archivo;
  archivo.open(nombreArchivo);
  do
  {
    cout<<"\t Ingrese el nombre: ";
    getline(cin,nombre);
    cout<<"\t Ingrese el apellido: ";
    getline(cin,apellido);
    cout<<"\t Ingrese la carrera: ";
    getline(cin,carrera);
    cout<<"\t Ingrese la edad: ";
    cin>>edad;

    archivo<<nombre<<" "<<apellido<<" "<<carrera<<" "<<edad<<endl;
    cout<<"Desea ingresar otro contacto? [s/n]: ";
    cin>>r;
    cin.ignore();
  }
  while(r=='s');
  archivo.close();
}

void mostrarDatos(string nombreArchivo)
{
  string nombre, apellido, carrera, texto;
  int edad;

  ifstream archivoLectura;
  archivoLectura.open(nombreArchivo,ios::in);

  if(archivoLectura.fail())
  {
    cout<<"NO SE ENCONTRO NINGUN ARCHIVO"<<endl;
  }
  else
  {
    while(!archivoLectura.eof())
    {
      archivoLectura>>nombre>>apellido>>carrera>>edad;

      if(!archivoLectura.eof())
      {
        cout<<"------------------------------------------"<<endl;
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Apellido: "<<apellido<<endl;
        cout<<"Carrera: "<<carrera<<endl;
        cout<<"Edad: "<<edad<<endl;
        cout<<"------------------------------------------"<<endl;
      }
    }
  }
  archivoLectura.close();
}

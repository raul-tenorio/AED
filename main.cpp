#include <iostream>
using namespace std;
#define MAX 20
#define FALSE 0
#define TRUE 1
void escoger(int, int, int [ ]);
void imprimir(int, int[ ]);
int main(void)
{
int i, n;
int decision[MAX];
cout<<"Numero de elementos: ";
cin>>n;
// marcamos objetos como no escogidos
for(i=0; i<n; i++)
decision[i]=FALSE;
escoger(0, n, decision);
}

void imprimir(int n, int decision[ ])
{
int i;
for(i=0; i<n; i++)
cout<<decision[i];
cout<<"\n";
}
void escoger (int k, int n, int decision[ ])
{
if (k<n)
{
// no se toma el objeto
decision[k]= FALSE;
escoger(k+1, n, decision);
// se toma el objeto
decision[k]= TRUE;
escoger(k+1, n, decision);
decision[k]= FALSE;
}
else
imprimir(n, decision);
}

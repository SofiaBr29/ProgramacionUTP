#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int tam, temp;
    float varianza=0, media=0, ds=0;
    cout << "Dijita la dimension vector" << endl;
    cin>>tam;
    int vect[tam];
    cout<<""<<endl;
    cout<<"Llenando Vector"<<endl;
    for(int i=0; i<tam; i++)
    {
        cout<<endl;
        cout<<"Digita el Dato"<<i<<endl;
        cin>>vect[i];
    }
    cout<<"Mostrando el Vector"<<endl;
    for(int i=0; i<tam; i++)
      {
        cout<<vect[i]<<" ";
      }
        cout<<endl;
        for(int i=0;i<tam;i++)
         {
         media+=vect[i];
         }
        media=media/tam;
        for(int i=0;i<tam;i++)
            {
             varianza=varianza+pow((vect[i]-media),2);
            }
   ds=sqrt(varianza/(tam-1));
   cout<<"La media es: "<<media<<endl;
   cout<<"La desviacion estandar es "<<ds<<endl;
 return 0;
}
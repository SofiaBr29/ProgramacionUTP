#include <iostream>
using namespace std;

int main ()
{
    int num, numero[num], suma;
    int *pnumero=&numero[0];

    cout<<"Calcular la suma de los numeros impares desde el 0 hasta N, N sera proporcionada por usted"<<endl;
    cout<<"Ingrese N \t"; 
    cin>>num; 

    for (int i=0;i<=num;i++)
    {
        if(i%2==1)
        {
           pnumero[num]=numero[num]+i;
           suma=pnumero[num];
        }     
    }   
    cout<<"El valor de la suma de los numeros impares hasta el numero "<<num<<" es: "<<suma<<endl; 
}

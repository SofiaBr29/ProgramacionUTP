#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    
    int arreglo[80], num,i;
    int *parreglo=&arreglo[0];
    
    cout<<"Ingrese la dimension del arreglo \t";
    cin>>num;

    for( i=0 ; i<num ; i++)
    {
        parreglo[i]=rand() % 90;
        cout<<arreglo[i]<<endl;

    if(parreglo[i]%2==0)
    {
        cout<<"numero par "<<parreglo[i]<<endl;
    }  
    }
}
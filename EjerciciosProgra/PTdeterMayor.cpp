#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() 
{
    srand(time(NULL));
    int n=0;
    cout<<"Ingresar dimensiones del arreglo \t";
    cin>>n;
    int num[n], nummayor=0;
    int *pnum=&num[0];
    
    for (int i=0; i<n; i++)
    {
        pnum[i]=rand() % 20 + 1;
    }

    cout<<endl;
    cout<<"El arreglo es: \t";
    for (int i=0; i<n; i++)
    {
        cout<<num[i]<<" ";

        if(pnum[i]>nummayor)
        {
            nummayor=pnum[i];
        }
    }  
    cout<<endl<<"El numero mayor es: "<<nummayor<<endl;
}
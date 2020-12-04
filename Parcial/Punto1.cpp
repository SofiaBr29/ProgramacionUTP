#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int n = 0, ran=10;
    
    cout<<"Ingrese Tamano de la matriz: \t";
    cin>>n;
    cout<<"El arreglo de "<<n<<"x"<<n<<" Se llenara con numeros aleatorios entre el #1 y el Numero: ";
    cin>>ran;

    int a[n][n]; //matriz
    int b[ran+1]; //vector

    for (int i = 0; i <= ran; i++) //llenar vector b
    {  
        b[i]=0;
    }

    for (int i = 0; i < n; i++) //llenar y contar matriz a
    {
        for (int j = 0; j < n; j++) 
        {
            a[j][i]=((rand()%ran)+1);
            b[a[j][i]]++;
            cout <<a[j][i]<< "\t";
        }
        cout<<endl;
    }

    for (int j = 0; j <= ran; j++) 
    {
        if (b[j]>1)
        {
            cout<<endl<<"Se repite el: ("<<j<<") "<<b[j]<<" Veces";
        }
    }
}
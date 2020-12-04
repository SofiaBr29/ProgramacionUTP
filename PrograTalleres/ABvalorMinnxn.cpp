#include<iostream>
#include <stdlib.h>  
#include <time.h>

using namespace std;

int main()
{
    int nf,nc, menor = 9999;
    int i,j,valor;

    cout << "ingrese la cantidad de filas"<<endl;
    cin>>nf;

    cout << "ingrese la cantidad de columnas"<<endl;
    cin>>nc;

    int matrizA[nf][nc];
    srand (time(NULL));
    cout<<endl<<endl<<"matriz A ="<<endl;
 
      for(i = 0; i < nf; i++)
    {
        for(j = 0; j < nc; j++)
        {
          matrizA[i][j] =  rand() % 20 + 1; 
        }
    }
       
    for(i = 0; i < nf; i++)
    { 
        for(j = 0; j < nc; j++)
        {
            cout<<matrizA[i][j]<<"\t";

        if (matrizA[i][j] < menor)
         {
            menor= matrizA[i][j];
         }
       } cout<<endl;

        
    }
    cout<<"el numero menor es "<<menor<<endl;


    
}
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main()
{
    int nf,nc, menor=0;

    cout<<"Por favor ingrese el numero de filas de su arreglo"<<endl;
    cin>>nf;

    cout<<"Por favor ingrese el numero de columnas de su arreglo"<<endl;
    cin>>nc;

    int matrizA[nf][nc];
    srand (time(NULL));
    cout<<endl<<endl<<"matriz A ="<<endl;
    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            matrizA[i][j]=7;
            matrizA[i][j] =  rand() % 99 + 1;
        }
    }

    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            cout<<matrizA[i][j]<<" ";
        }cout<<endl;
    }
        menor=matrizA[0][0];
        for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            if(matrizA[i][j]<menor)
            {
                menor = matrizA[i][j];
            }
        }
    }
    cout<<"Su numero menor es = "<< menor <<endl;
    

}
   

   



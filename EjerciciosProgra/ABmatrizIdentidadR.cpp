#include<iostream>

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
    
    cout<<endl<<endl<<"matriz A ="<<endl;
 
      for(i = 0; i < nf; i++)
    {
        for(j = 0; j < nc; j++)
        {
            if (j==i)
            {
            matrizA[j][i] = 1;
            }
            else 
            {
            matrizA[j][i] = 0;
            }
        }
    }
       
    for(i = 0; i < nf; i++)
    { 
        for(j = 0; j < nc; j++)
        {
            cout<<matrizA[j][i]<<"\t";
        }cout<<endl;

        
    }
   
}
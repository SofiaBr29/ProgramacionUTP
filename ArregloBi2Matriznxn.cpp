#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main()
{
    int n;

    cout<<"Por favor ingrese tamano de su arreglo"<<endl;
    cin>>n;

    

    int matrizA[n][n];
    srand (time(NULL));
    cout<<endl<<endl<<"matriz A ="<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            matrizA[i][j]=7;
            matrizA[i][j] =  rand() % 99 + 1;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrizA[i][j]<<" ";
        }cout<<endl;
    }
       
    

}
   

   



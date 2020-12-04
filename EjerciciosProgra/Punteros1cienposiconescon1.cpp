#include <iostream>

using namespace std;

int main()
{
    int n = 10, contador=0;
    int arregloA[n][n];
    int *parregloA = &arregloA[0][0];
    

    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
           parregloA[ i * n + j ]  = 1;
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
           cout<<parregloA[ i * n + j ]<<" ";  
        }cout<<endl;
    }




}
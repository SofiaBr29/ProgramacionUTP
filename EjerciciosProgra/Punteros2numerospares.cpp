#include <iostream>

using namespace std;

int main()
{
    int n = 100, contador=0;
    int arregloA[n];
    int *parregloA = &arregloA[0];
    

    for(int i = 0; i < n; i++)
    {
        
    }
    
    parregloA = arregloA;

    for(int i=0; i<n; i++){

        if (*parregloA%2==0)
        {
            cout<<"el numero "<<*parregloA<<endl;
        }
        

    }



}
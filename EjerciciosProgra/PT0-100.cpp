#include <iostream>
using namespace std;

int main() 
{
    int arregloA[51];
    int *parregloA=&arregloA[0];

    for(int i=0; i<51; i++)
    {
        parregloA[i]=i*2;
        cout<<arregloA[i]<<"\t";
    }
}
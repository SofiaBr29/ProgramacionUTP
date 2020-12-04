#include <iostream>
using namespace  std; 

int  main ()
{
    int arregloA [ 100 ];
    int *parregloA = & arregloA [ 0 ];

    for (int i=0; i<100; i++)
    {
        parregloA [i] = 1 ;
        cout<<arregloA [i] <<"\t";
    }   

}
#include <iostream>
#include <time.h> 
#include <stdlib.h> 

using namespace std;

int main()
{

    int arregloAleatorios[10]; 
    srand (time(NULL));

    for(int i = 0; i < 10; i++)
    {
        arregloAleatorios[i] = rand() % 10 + 1;
    }

    for(int i = 0; i < 10; i++)
    {
        cout<<arregloAleatorios[i]<<" ";
    }

}
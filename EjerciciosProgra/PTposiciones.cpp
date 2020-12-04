#include <iostream>
using namespace std;

int main() 
{
    int posicion[10], n=0;
    int *pposicion = &posicion[0];

    for (int i=0; i<10; i++)
    {
        cout<<"numero "<< i+1<<" del arreglo: ";
        cin>>n;
        pposicion[i]=n;  
    }
    
    cout<<"El arreglo:"<<endl;
    for (int i=0; i<10; i++)
    {
        cout<<posicion[i]<<"\t";
    }
}

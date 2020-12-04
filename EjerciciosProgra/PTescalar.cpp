#include <iostream>
using namespace std;

int main()
{
    int n[50], escalar;
    int *pn= &n[0];
    cout<<"ingrese el escalar por el cual va a multiplicar el vector \t";
    cin>>escalar;
    
    for(int i=1; i<51; i++)
    {
        pn[i]=1;
        pn[i]=i*escalar;
        cout<<pn[i]<<"\t";
    }

}
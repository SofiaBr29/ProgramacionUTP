#include <iostream>

using namespace std;

int main()
{
    int n[50],i,escalar;

    cout<<"ingrese el escalar por el cual va a multiplicar el vector"<<endl;
    cin>>escalar;

    for ( i = 1; i <51; i++)
    {
        n[i]=i*escalar;
        cout<<n[i]<<"\t";
    }
    
 return 0;
}
#include <iostream>

using namespace std;
void valor(float &m, float &n, float &b);

int main() 
{
    float m, n, b;
    cout<<"Digite los numero los cuales quiere determinar el numero mayor y el numero menor"<<endl;
    
    cout<<"Numero Uno "<<endl;
    cin>>m;

    cout<<"Numero Dos "<<endl;
    cin>>n;

    cout<<"Numero tres "<<endl;
    cin>>b;

    float maximo=0;
    
    valor(m, n, b);
}

void valor(float &m, float &n, float &b)
{
    if (m>n && m>b)
    {
        cout<<"MAYOR = "<<m<<endl;
    }

    if (n>m && n>b)
    {
        cout<<"MAYOR = "<<n<<endl;
    }

     if (b>m && b>n)
    {
        cout<<"MAYOR = "<<b<<endl;
    }

    if (m<n && m<b)
    {
        cout<<"MENOR = "<<m<<endl;
    }

    if (n<m && n<b)
    {
        cout<<"MENOR = "<<n<<endl;
    }

    if (b<m && b<n)
    {
        cout<<"MENOR = "<<b<<endl;
    }
}
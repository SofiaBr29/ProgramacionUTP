#include <iostream>

using namespace std;
void mayormenor(float &a, float &b, float &c);

int main() 
{
    float a, b, c;
    cout<<"Determinar numero mayor y el numero menor"<<endl;
    cout<<"Ingrese el primer numero \t";
    cin>>a;
    cout<<"Ingrese el segundo numero \t";
    cin>>b;
    cout<<"Ingrese el tercer numero \t";
    cin>>c;
    float max=0;
    mayormenor(a, b, c);
}

void mayormenor(float &a, float &b, float &c)
{
    if (a>b && a>c)
    {
        cout<<"el numero mayor es "<<a<<endl;
    }

    if (b>a && b>c)
    {
        cout<<"el numero mayor es "<<b<<endl;
    }

     if (c>a && c>b)
    {
        cout<<"el numero mayor es "<<c<<endl;
    }

    if (a<b && a<c)
    {
        cout<<"el numero menor es "<<a<<endl;
    }

    if (b<a && b<c)
    {
        cout<<"el numero menor es "<<b<<endl;
    }

    if (c<a && c<b)
    {
        cout<<"el numero menor es "<<c<<endl;
    }
}
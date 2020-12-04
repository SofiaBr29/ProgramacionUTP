#include <iostream>
#include <math.h>

using namespace std;
void Valor(float &COP, float &USD, float &EUR);

int main()
{
    float COP, USD, EUR;

    cout<<"CONVERTIDOR DE MONEDA, DE PESOS COLOMBIANOS (COP) A DOLARES (USD) Y A EUROS (EUR) "<<endl<<endl;

    cout<<"Digite el valor en pesos colambianos para saber el intercambio "<<endl;
    cin>>COP;

    Valor(COP, USD, EUR);

    cout<<COP<<" pesos colombianos son "<<USD<<" dolares (USD)"<<endl;
    cout<<COP<<" pesos colombianos son "<<EUR<<" euros (EUR)"<<endl;

}

void Valor(float &COP, float &USD, float &EUR)
{
    USD=COP*0.00027;
    EUR=COP*0.00023;
}
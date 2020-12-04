#include <iostream>
#include <math.h>

using namespace std;
void  Cuadratica ( float a, float b, float c, float &r1, float &r2);

int  main ()
{
    float a, b, c, r1, r2;
    cout<<"Ingrese el valor de a \t";
    cin>>a;
    cout<<"Ingrese el valor de b \t";
    cin>>b;
    cout<<"Ingrese el valor de c \t";
    cin>>c;
    Cuadratica (a, b, c, r1, r2);
    cout<<"Las raices de la funcion cuadratica son " << r1 << " y " << r2 <<endl;

}
void Cuadratica ( float a, float b, float c, float &r1, float &r2)
{
    r1= (-b+sqrt((pow(b,2))-(4*a*c)))/(2*a);
    r2= (-b-sqrt((pow(b,2))-(4*a*c)))/(2*a);   
}
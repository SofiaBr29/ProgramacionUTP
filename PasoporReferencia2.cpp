#include <iostream>
#include <math.h>

using namespace std;
void  Cuadratica ( float a, float b, float c, float &x1, float &x2);

int  main ()
{
    cout<<"La ecuacion cuadratica es (-b+-raiz(b^2-4ac))/2a"<<endl;
    cout<<"n=a, m=b, c=b"<<endl;

    float a, b, c, x1, x2;

    cout<<"Digite a "<<endl;
    cin>>a;

    cout<<"Digite b "<<endl;
    cin>>b;

    cout<<"Digite c "<<endl;
    cin>>c;

    Cuadratica (a, b, c, x1, x2);
    cout<<"Los resultados de la ecuacion cuadratica son " << x1 << " y " << x2 <<endl;

}
void Cuadratica ( float a, float b, float c, float &x1, float &x2)
{
    x1= (-b+sqrt((pow(b,2))-(4*a*c)))/(2*a);

    x2= (-b-sqrt((pow(b,2))-(4*a*c)))/(2*a);   
}
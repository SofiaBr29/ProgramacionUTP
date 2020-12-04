#include <iostream>
#include <math.h>

using namespace std;
void  Area(float circunferencia, float &area, float &radio);

int  main ()
{
    float c, a, r;
    cout<< "Digite la equivalencia de la circunferencia "<<endl;
    cin>> c;
    Area(c, a, r);
    cout<< "AREA = "<<a <<endl;
    cout<< "RADIO = " <<r<<endl;
}

void  Area ( float circunferencia, float &area, float &radio)
{
    radio= circunferencia/( 2 * 3.1416);
    area= (3.1416)*radio*radio;
}
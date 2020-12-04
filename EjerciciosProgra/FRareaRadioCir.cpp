#include <iostream>
#include <math.h>

using namespace std;
void  Area(float circunferencia, float &area, float &radio);

int  main ()
{
    float circun, area, radio;
    cout<< "Ingrese el valor de la circunferencia \t ";
    cin>> circun;
    Area(circun, area, radio);
    cout<< "El area es: "<<area <<endl<< "El radio es: " <<radio<< endl;
}

void  Area ( float circunferencia, float &area, float &radio)
{
    radio= circunferencia/( 2 * 3.1416);
    area= (3.1416)*radio*radio;
}
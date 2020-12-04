#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    float n, num, resultado = 1;
    float raiz;
 
    cout << "digite cuantos datos desea ingresar: "<<endl; 
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "Numero " << i << ": ";
        cin >> num;

        resultado= resultado*num;

    }
    raiz = pow(resultado,(1/n));

    cout << "\nLa media geometrica es: " << raiz << endl;
 
    return 0;
}
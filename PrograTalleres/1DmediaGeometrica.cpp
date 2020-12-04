#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    float N, numero, producto = 1;
    float raiz;
 
    cout << "digite cuantos datos desea ingresar: "; 
    cin >> N;
    cout << endl;
    for (int i = 1; i <= N; i++)
    {
        cout << "Numero " << i << ": ";
        cin >> numero;

        producto= producto*numero;

    }
    raiz = pow(producto,(1/N));

    cout << "\nLa media geometrica es: " << raiz << endl;
 
    return 0;
}
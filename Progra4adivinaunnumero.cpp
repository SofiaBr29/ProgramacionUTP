#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h> 

using namespace std;

int main() {
    int a, b, n, x, y;
    cout<<"Ingrese el limite inferior: "<<endl;
    cin>>a;
    cout<<"Ingrese el limite superior: "<<endl;
    cin>>b;
    x = a+rand()%(b-a);
    cout<<"El numero es:"<<x<<endl<<endl;
    cout<<"Ingrese el numero de intentos: "<<endl;
    cin>>n;
    cout<<"Ingrese el numero: "<<endl;
    cin>>y;
    for(int i=1; i<n; i++){
        if(y == x){
            cout<<"Adivinaste!!!"<<endl;
            return 0;
        }
        cout<<"Ingrese el numero: "<<endl;
        cin>>y;
    }
    cout<<"Vuelve intentarlo."<<endl;
	return 0;
}
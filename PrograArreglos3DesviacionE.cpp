#include <iostream>

using namespace std;

int main() {

    int n;
    cout<<"Ingrese la cantidad de numeros: "<<endl;
    cin>>n;
    double numeros[n];
    double a=0;
    double ma=0;
    for(int i=0; i<n; i++){

    cout<<"ingrese los numeros: "<<endl;
    cin>>numeros[i];
    a = numeros[i] + a;
    }

    cout<<"la media aritmetica es :"<<(ma=a/n)<<endl;

    return 0;
}
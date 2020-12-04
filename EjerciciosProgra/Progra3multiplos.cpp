 #include<iostream>
#include<math.h>

using namespace std;
int main()
{
    int numeroUsuario;
    int intervalo1;
    int intervalo2;
    int tablaMultiplicar;

    cout<<"Ingrese el numero del que quiere conocer la tabla de multiplicar"<<endl;
    cin>>numeroUsuario;

    cout<<"ingrese desde que numero desea que empiece la multiplicaion"<<endl;
    cin>>intervalo1;

    cout<<"ingrese el numero donde desea que termine la multiplicacion"<<endl;
    cin>>intervalo2;

    while (intervalo1<=intervalo2)
    {
        tablaMultiplicar=numeroUsuario*intervalo1;
        cout<<numeroUsuario<<"*"<<intervalo1<<"="<<tablaMultiplicar<<endl;
        intervalo1++;

    }
    
    
return 0;  
}
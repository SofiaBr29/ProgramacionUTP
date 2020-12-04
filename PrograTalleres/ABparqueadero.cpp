#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main()
{
  srand(time(NULL));

  int n, aux;

  int opcion=1;
  int op;
  int posx;
  int posy;

  cout<<"Ingrese el tamano del parqueadero ";
  cin >>n;
  cout<<endl;
  
  int MatrizA[n][n];
  int b[4];

  for (int i = 0; i <= 3; i++) {
      b[i]=0;
  }

      
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        MatrizA[j][i] = 2;
        MatrizA[j][i] = rand()%4;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout<<MatrizA[j][i]<<"\t";
        aux = MatrizA[j][i];
        b[aux] = b[aux] + 1;
    }
    cout<<endl;
  }

  cout<<endl;

  cout<<b[0]<<" Espacios libres"<<endl;
  cout<<b[1]<<" Motos"<<endl;
  cout<<b[2]<<" Auto sedan 5 puestos"<<endl;
  cout<<b[3]<<" Auto de 7 pasajeros"<<endl;
  do
{
    for (int i = 0; i <= 3; i++) {
      b[i]=0;
  }
    cout<<"Desea Ingresar un nuevo vehiculo?"<<endl<<" 1)Si  0)No"<<endl;
    cin>>opcion;
    if (opcion == 1)
    {
        cout<<"Que vehiculo desea ingresar?"<<endl<<"1) Moto"<<endl<<"2) Sedan 5 puertas"<<endl<<"3) Auto 7 pasajeros"<<endl;
        cin>>op;
        cout<<"Donde lo desea ingresar? (Primero posicion en X despues posicion en Y)";
        cin>>posx;
        cin>>posy;
        if(MatrizA[posx-1][posy-1]==0){
            MatrizA[posx-1][posy-1]=op;
    
            for (int k = 0; k < n; k++) {
              for (int l = 0; l < n; l++) {
                  cout<<MatrizA[l][k]<<"\t";
                  aux = MatrizA[l][k];
                  b[aux] = b[aux] + 1;
              }
              cout<<endl;
            }

            cout<<endl;


            cout<<b[0]<<" Espacios libres"<<endl;
            cout<<b[1]<<" Motos"<<endl;
            cout<<b[2]<<" Auto sedan 5 puestos"<<endl;
            cout<<b[3]<<" Auto de 7 pasajeros"<<endl;
        }else{cout <<"Espacio ya ocupado"<< "\n";}
    }
} while (opcion == 1);
 

return 0;
}
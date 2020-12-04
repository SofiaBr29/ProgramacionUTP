#include <iostream>
using namespace std;

float * pascal(int fila) {
   float * triangulo;
   
   triangulo = new float[fila * fila]; 
   
   for (int i = 0; i < fila; i++)
       for (int j = 0; j <= i; j++)
            if (j != 0 && j != i)
                triangulo[i * fila + j] = triangulo[(i - 1) * (fila) + j] + triangulo[ (i - 1) * (fila) + j - 1];
            else
                *(triangulo + (i * fila + j)) = 1;
    float * Ultima = new float[fila];

   for (int i = 0; i < fila; i++)
       Ultima[i] = triangulo[(fila - 1) * fila + i];
    
  return Ultima;
}
  
int main() {
   
    int Numfilas;
    cout<<"ingrese el numero de fila:";
    cin>>Numfilas;
    float * fila = pascal(Numfilas);
    for (int j = 0; j < Numfilas; j++)
      cout << *(fila + j) << " ";
     
   
    
    return 0;
}
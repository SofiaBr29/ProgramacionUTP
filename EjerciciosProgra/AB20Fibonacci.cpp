#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
  
  int anterior = 0, auxiliar = 0, siguiente = 1;
  int n = 5, m = 4;
  int MatrizA[n][m];
  
  cout<< "20 primeros numeros de fibonacci"<<endl;
  for (int i = 0; i < m; i++)
  {  
    for (int j = 0; j < n; j++) 
    {
      MatrizA[j][i] = siguiente;
      auxiliar=anterior+siguiente;
      anterior=siguiente;
      siguiente=auxiliar;
    }
  }  

 for (int i = 0; i < m; i++)
 {
   for (int j = 0; j < n; j++)
   {
    cout<< MatrizA[j][i]<<"\t";

   } 
   cout<<endl;
 }

  return 0;
}
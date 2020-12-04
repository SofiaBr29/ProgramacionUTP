#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
  

  double antes = 0;
  double despues = 1;
  double auxiliar = 0;

  int n = 5;
  int m = 4;

  
    int a[n][m];

      
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        a[j][i] = 7;
        a[j][i] = despues;

        auxiliar=antes+despues;
        antes=despues;
        despues=auxiliar;
      }
    }


     for (int k = 0; k < m; k++) {
        for (int l = 0; l < n; l++) {
             cout<<a[l][k]<<"\t";
}
cout<<endl;
}

  system("pause");
  system("cls");
  return main();
  }
   

   



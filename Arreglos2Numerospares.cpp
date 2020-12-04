#include <iostream>


using namespace std;

int main() {

    int numeros [100],num=0;


    for(int i=0;i<100;i++){

        num=num+1; //num++

        if(i%2!=0 && numeros[i]%2==0){

       
        numeros[i]=num;
        cout<<numeros[i]<<endl;

        }
    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {

    int n[50], num,  i;

    cout<<"Escriba por favor el escalar por el cual quiere multiplicar el vector."<<endl;
    cin>>num;

    for(int i=0; i<=50; i++){

        
        n[i] = i * num ;
        

       cout<< n[i] << " " ;
       

    }



    return 0;
}
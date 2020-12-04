#include <iostream>
#include <stdlib.h>  
#include <time.h>

using namespace std;

int main()
{
    srand (time(NULL));
    int temp[24], n, fin=0;

    for (int i = 0; i < 25; i++)
    {
        temp[i]= 15 + rand()%(30-15);
    }

    cout<<"ingrese la hora de la que quiere conocer la temperatura (fromato 24h)"<<endl;
    cin>>n;  
    cout<<"La temperatura a las "<<n<<" es "<<temp[n]<<" grados C"<<endl;
    
    return 0;
}
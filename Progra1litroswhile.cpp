#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double n;
    double resultadog;
    double resultadom;

    resultadog<-0;
    resultadom<-0;

    cout<<"Digite el valor en litros que quiera convertir en galones y militros"<<endl;

    cin>>n;

    while (n>=100);
    {
        resultadog=resultadog+n*0.264176;
        resultadom=resultadom+n*1000;
    }
    
    cout<<"Su resultado en galones es = "<<resultadog<<endl;
    cout<<"Su resultado en militros es = "<<resultadom<<endl;



return 0;

}






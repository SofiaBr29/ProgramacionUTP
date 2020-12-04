#include <iostream>

using namespace std;

int main()
{
    int n[100], i;
    int num=0;

   for(i = 0; i <100; i++)
   { 
       num=num+1;

        if(i%2!=0 && n[i]%2==0)
        {
        n[i]=num;
        cout<<n[i]<<"\t";
        }
   }
        
    return 0;
}
#include <iostream>

using namespace std;
int Factorial(int x);

int main ()
{
    int n;
    cout<<"numero que desea conocer el factorial"<<endl;
    cin>>n;
    cout<< "el factorial de "<<n<<" es "<<Factorial(n)<<endl;
}
  
int Factorial(int x)
{
  int i = 1;
  for (int j = 1; j <= x ; j++) 
  {
    i = i*j;
  }
  return i;
}
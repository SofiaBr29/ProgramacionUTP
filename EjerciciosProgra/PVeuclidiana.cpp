#include <iostream>
#include <math.h>

using namespace std;
float euclidiana(float Xq, float Xp, float Yq, float Yp);

int main ()
{
    float x1,x2,y1,y2;
    cout<<"Para hallar la distancia euclidiana de un vector (P,Q) ingrese los siguientes datos: \t"<<endl;
    cout<<"Xq\t";
    cin>>x1;
    cout<<"Xp\t";
    cin>>x2;
    cout<<"Yq\t";
    cin>>y1;
    cout<<"Yp\t";
    cin>>y2;
    cout<< "la distancia euclidiana del vecto (P,Q) es "<<euclidiana(x1,x2,y1,y2)<<endl;
}

float euclidiana(float Xq, float Xp, float Yq, float Yp)
{
  float fun;
  fun= (pow(Xq-Xp,2) + pow(Yq-Yp,2));
  return sqrt(fun);
}
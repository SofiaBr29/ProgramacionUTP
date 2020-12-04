#include <iostream>

using namespace std;
float tension (float r1, float r2, float r3, float VaFuente, int conex);
float tension2 (float r1, float r2, float r3, float VaFuente, int conex);


int main ()
{
    float resis1, resis2, resis3, fuente, VaFuente;
    int conex;
    cout<<"Ingrese el valor de la resistencia 1 \t";
    cin>>resis1;

    cout<<"Ingrese el valor de la resistencia 2 \t";
    cin>>resis2;

    cout<<"Ingrese el valor de la resistencia 3 \t";
    cin>>resis3;

   // cout<<"Ingrese si la fuente DC es de corriente o de voltaje (1. corriente 2. voltaje ) \t";
    //cin>>fuente;
    cout<<"Ingrese el valo de la fuente \t";
    cin>>VaFuente;
    cout<<"Ingrese si esta conectado en serie o en paralelo (1. serie 2. paralelo ) \t";
    cin>>conex;
    cout<<"respuesta tension "<<tension(resis1,resis2,resis3,VaFuente,conex)<<" Corriente: "<<tension2(resis1,resis2,resis3,VaFuente,conex)<<endl;
}

float tension (float r1, float r2, float r3, float VaFuente, int conex)
{
  float reqS, reqP, corr, ten;
  if (conex==1) // serie
  {
    reqS=r1+r2+r3;
    corr=VaFuente/reqS;
    ten=VaFuente*reqS;
    
  } else
  {
    reqP=(1/((1/r1)+(1/r2)+(1/r3)));
    corr=VaFuente/reqP;
    ten=VaFuente*reqP; 
  } 
  
  return ten;
}

float tension2 (float r1, float r2, float r3, float VaFuente, int conex)
{
  float reqS, reqP, corr, ten;
  if (conex==1) // serie
  {
    reqS=r1+r2+r3;
    corr=VaFuente/reqS;
    ten=VaFuente*reqS;
    
  } else
  {
    reqP=(1/((1/r1)+(1/r2)+(1/r3)));
    corr=VaFuente/reqP;
    ten=VaFuente*reqP; 
  } 
  
  return corr;
}
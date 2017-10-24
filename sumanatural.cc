//Suma de nùmeros naturales Diego Armando Medel Luna 24 de Octubre de 2017
#include<iostream>
using namespace std;
int main(){
  long N;
  long sum=0;
  cout<<"Inserte un nùmero natural"<<endl;
  cin>>N;
  for (long i=1; i<=N; i++){
    sum=sum+i;}
  cout<<"La suma es"<<sum<<endl;
  return 0;
}

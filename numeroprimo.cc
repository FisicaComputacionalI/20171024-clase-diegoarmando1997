//Programa para ver si un nùmero es primo Diego Armando Medel Luna 24 de Oct. de 2017
#include<iostream>
using namespace std;
int main(){
  long N=12;
    long flag=0;
  long divisor=0;
  cout<<"inserte un nùmero_"<<endl;
  cin>>N;
  for(long i=2; i<(N/2); i++)
    {
      if (N%i==0){
	flag=1;
	divisor=i;
	break;
      }
    }
  if (flag==1){
    cout<<"Tu nùmero no es primo"<<endl;
    cout<<"porque se divide entre"<<divisor<<endl;
  }
 else
      cout<<"tu nùmero es primo"<<endl;
  return 0;
}

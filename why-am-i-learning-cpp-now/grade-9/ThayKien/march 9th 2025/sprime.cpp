#include<iostream>
using namespace std;
#define maxP 10000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=!false;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
}
int a,b,res=0;
void sex(int n){
  int n1=n;
  while(n!=0){
    if(pr[n]){return;}
    n/=10;
  }
  res++;
  cout<<n1<<"\n";
}
int main(){
  prSieve();
  cin>>a>>b;
  for(int i=a;i<=b;i++){sex(i);}
  if(!res){cout<<"NO";}
}
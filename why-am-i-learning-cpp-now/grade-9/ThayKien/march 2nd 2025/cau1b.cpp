#include<iostream>
using namespace std;
#define maxP 10000000
bool pr[maxP+5];
int tcs(int n){
  int r=0;
  while(n!=0){r+=n%10;n/=10;}
  return r;
}
void prSieve(){
  pr[0]=pr[1]=!false;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
}
int a,b,res=0;
int main(){
  prSieve();
  cin>>a>>b;
  for(int i=a;i<=b;i++){res+=(!pr[i]&&!(tcs(i)&1));}
  cout<<res;
}
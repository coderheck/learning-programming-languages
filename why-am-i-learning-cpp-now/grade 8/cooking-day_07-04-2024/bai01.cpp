#include"iostream"
#include"stdio.h"
#define ll long long
using namespace std;
ll revD(ll n){
  ll n1=n,ret=0;
  while(n1!=0){ret*=10;ret+=n1%10;n1/=10;}
  return ret;
}
int main(){
  if(fopen("bai01.inp","r")){
    freopen("bai01.inp","r",stdin);
    freopen("bai01.out","w",stdout);
  }
  int a,b,d=0;cin>>a>>b;
  for(int i=a;i<=b;i++){
    if(i==revD(i)){d++;}
  }
  cout<<d;
}
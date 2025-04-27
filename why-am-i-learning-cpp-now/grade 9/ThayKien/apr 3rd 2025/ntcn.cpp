#include<iostream>
using namespace std;
#define ll long long
ll n,res;
int main(){
  cin>>n;
  if(!n){cout<<0;return 0;}
  res=n;
  for(ll x=2;x*x<=n;x++){
    if(n%x==0){
      res-=res/x;
      while(n%x==0){n/=x;}
    }
  }
  if(n>1){res-=res/n;}
  cout<<res;
}
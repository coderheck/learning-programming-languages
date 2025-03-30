#include<iostream>
using namespace std;
#define ll unsigned long long
ll fastpowmod(ll a,ll b,ll c){
  a%=c;if(!a){return 0;}
  ll res=1;
  while(b>0){
    if(b&1){res=(res*a)%c;}
    b>>=1;a=(a*a)%c;
  }
  return res;
}
ll x,n,big,t;
int main(){
  cin>>x>>n;big=fastpowmod(x,n,9);
  if(big==0){cout<<9;}else{cout<<big;}
}
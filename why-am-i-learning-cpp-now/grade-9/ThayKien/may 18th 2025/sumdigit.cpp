#include<iostream>
using namespace std;
#define ll long long
ll fastpowmod(ll a,ll b){
  a%=9;
  if(!a){return 0;}
  ll res=0;
  while(b>0){
    if(b&1){res=(res*a)%9;}
    b>>=1;a=(a*a)%9;
  }
  return res;
}
ll n,x,c;
int main(){
  cin>>x>>n;
  c=fastpowmod(x,n);
  if(!c){cout<<9;}else{cout<<c;}
}

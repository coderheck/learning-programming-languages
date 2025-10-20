#include<iostream>
using namespace std;
#define ll long long
ll fastpowmod(ll a,ll b,ll c){
  ll res=1;a%=c;
  if(!a){return 0;}
  while(b>0){
    if(b&1){res=(res*a)%c;}
    b>>=1;a=(a*a)%c;
  }
  return res;
}
ll a,b,n,m;
int main(){
  cin>>a>>b>>n>>m;
  cout<<fastpowmod(a,n,1000000000)+fastpowmod(b,m,1000000000);
}
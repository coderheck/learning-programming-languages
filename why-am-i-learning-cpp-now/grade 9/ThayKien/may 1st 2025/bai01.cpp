#include<iostream>
using namespace std;
#define ll long long
#define MOD 1000000000
ll fastpowmod(ll a,ll b){
  a%=MOD;if(!a){return 0;}
  ll res=1;
  while(b>0){
    if(b&1){res=(res*a)%MOD;}
    b>>=1;a=(a*a)%MOD;
  }
  return res;
}
ll a,b,n,m;
int main(){
  if(fopen("bai01.inp","r")){
    freopen("bai01.inp","r",stdin);
    freopen("bai01.out","w",stdout);
  }
  cin>>a>>b>>n>>m;
  cout<<fastpowmod(a,n)+fastpowmod(b,m);
}
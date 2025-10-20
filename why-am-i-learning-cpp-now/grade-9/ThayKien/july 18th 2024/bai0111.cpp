#include"iostream"
using namespace std;
#define ll long long
#define CHIADU 1000000000
ll fastpowmod(ll a, unsigned ll b, ll c){
  ll res=1;a%=c;
  if(a==0)return 0;
  while(b>0){ 
    if(b&1){res=(res*a)%c;} 
    b>>=1;
    a=(a*a)%c; 
  } 
  return res; 
}
int main(){
  ll a,b,n,m;cin>>a>>b>>n>>m;
  cout<<fastpowmod(a,n,CHIADU) + fastpowmod(b,m,CHIADU);
}
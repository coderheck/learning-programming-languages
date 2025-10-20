#include"iostream"
using namespace std;
#define ll long long
ll fastpow(ll a, unsigned ll b){
  ll ret=1;
  while(b>0){
    if(b&1){ret*=a;}
    b>>=1;a*=a;
  }
  return ret;
}
ll factorial(ll n){
  if(n==1){return 1;}else{return n*factorial(n-1);}
}
int main(){
  ll n,m;cin>>n>>m;ll k=m;bool f=false;
  ll nmod = factorial(n);
  while(!f){
    f=(nmod%fastpow(m,k)==0);
    k--;
  }
  cout<<k++;
}
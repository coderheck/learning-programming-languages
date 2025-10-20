#include"iostream"
using namespace std;
#define modd 1000000000
#define ll long long
ll fastpowmod(ll a, unsigned ll b, ll c){
  ll res=1; a%=c;
  if(a==0)return 0;
  while(b>0){
    if(b&1){res=(res*a)%c;} // b & 1 == !(b % 2)
    b>>=1; a=(a*a)%c;  // b >>= 1 == b /= 2
  }
  return res;
}
int main(){
  ll a,b,n,m;cin>>a>>b>>n>>m;
  cout<<fastpowmod(a,n,modd)+fastpowmod(b,m,modd);
}
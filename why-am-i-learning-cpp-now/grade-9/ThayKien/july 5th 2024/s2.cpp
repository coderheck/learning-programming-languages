#include"iostream"
#include"iomanip"
#define ll long long
#define ld long double
using namespace std;
ll fastPow(ll x, unsigned ll y){
  ll ret=1;
  while(y>0){
    if(y&1){ret*=x;}
    y>>=1;
    x*=x;
  }
  return ret;
}
int main(){
  ll a,n;ld s2=0;cin>>a>>n;
  for(ll i=1;i<=n;i++){
    s2+=fastPow(a,i)*1.0/i;
  }
  cout<<setprecision(3)<<s2;
}
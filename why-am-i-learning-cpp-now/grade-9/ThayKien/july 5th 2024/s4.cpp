#include"iostream"
#include"iomanip"
#define ll long long
using namespace std;
ll factorial(ll n){
  ll ret=1,i;
  for(i=2;i<=n;i++){ret*=i;}
  return ret;
}
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
  ll x,n;cin>>x>>n;
  long double s4=0;
  for(ll i=1;i<=n;i++){
    s4+=fastPow(x,i)*1.0/factorial(i);
  }
  cout<<setprecision(3)<<s4;
}
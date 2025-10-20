#include"iostream"
using namespace std;
#define ll long long
ll tcs(ll n){
  ll ret=0;
  while(n!=0){ret+=n%10;n/=10;}
  return ret;
}
ll gcd(ll a,ll b){
  return b==0?a:gcd(b,a%b);
}
int main(){
  ll a,b;cin>>a>>b;
  cout<<(tcs(a)/gcd(tcs(a),tcs(b)))*tcs(b);
}

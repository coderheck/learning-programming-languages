#include"iostream"
using namespace std;
#define ll long long
ll gcd(ll a, ll b){
  return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b){
  return (a/gcd(a,b))*b;
}
int main(){
  ll l,r,a,b,t=0;cin>>l>>r>>a>>b;ll sech=lcm(a,b);
  cout<<r/sech-(l-1)/sech;
}
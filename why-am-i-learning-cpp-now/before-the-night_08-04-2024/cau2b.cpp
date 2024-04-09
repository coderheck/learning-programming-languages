#include"iostream"
#include"numeric"
#define ll long long
using namespace std;
ll lcm(ll a,ll b){
  return a/gcd(a,b)*b;
}
int main(){
  ll n,a,b,c;cin>>n>>a>>b>>c;
  ll ab=n/lcm(a,b),bc=n/lcm(b,c),ac=n/lcm(a,c),abc=n/lcm(lcm(a,b),c);
  cout<<ab+bc+ac-3*abc;
}
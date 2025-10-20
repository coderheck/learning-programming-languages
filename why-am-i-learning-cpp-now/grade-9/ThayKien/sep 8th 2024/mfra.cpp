#include"iostream"
using namespace std;
#define ll long long
ll gcd(ll a, ll b){
  return b == 0 ? a : gcd(b, a % b);
}
int main(){
  ll a,b;cin>>a>>b;
  ll gcdd=gcd(a,b);
  cout<<a/gcdd<<" "<<b/gcdd;
}

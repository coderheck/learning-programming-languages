#include"iostream"
using namespace std;
#define ll long long
ll gcd(ll a,ll b){
  return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a,ll b){
  return (a/gcd(a,b))*b;
}
int main(){
  ll n,c=0;cin>>n;ll a[n];
  for(ll i=0;i<n;i++){cin>>a[i];}
  for(ll i=0;i<n;i++){
    for(ll j=i;j<n;j++){
      if(i<j&&a[i]+a[j]==2*lcm(a[i],a[j])){c++;}
    }
  }
  cout<<c;
}
#include"iostream"
#include"cmath"
#define ll long long
using namespace std;
ll gcd(ll a,ll b){
  return b==0?a:gcd(b, a % b);
}
ll lcm(ll a,ll b){
  return (a/gcd(a,b))*b;
}
int main(){
  if(fopen("cau1.inp","r")){
    freopen("cau1.inp","r",stdin);
    freopen("cau1.out","w",stdout);
  }
  ll l,r,a,b;
  cin>>l>>r>>a>>b;
  cout<<r/lcm(a,b) - (l-1)/lcm(a,b);
}

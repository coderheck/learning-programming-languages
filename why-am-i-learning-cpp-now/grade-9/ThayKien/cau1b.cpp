#include"iostream"
#include"math.h"
using namespace std;
#define ll long long
ll gcd(ll a,ll b){
  return b==0?a:gcd(b,a%b);
}
ll lcm(ll a, ll b){
  return (a/gcd(a,b))*b;
}
int main(){
  if(fopen("cau1b.inp","r")){
    freopen("cau1b.inp","r",stdin);
  }
  int q;cin>>q;
  for(int i=1;i<=q;i++){
    ll n;cin>>n;
    cout<<(n/3)+(n/7)-(n/lcm(3,7))<<"\n";
  }
}

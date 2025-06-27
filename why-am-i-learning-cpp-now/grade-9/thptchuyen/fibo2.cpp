#include<iostream>
using namespace std;
#define ll long long
#define mod 1000000007
struct p{ll a,b;}res;
ll n;
void fastDoubling(const ll &n){
  ll a=0,b=1;
  for(ll i=1;i<=n;i<<=1){
    if(n&i){
      ll c=(a*((2*b-a%mod)%mod))%mod;
      ll d=(a*a%mod+b*b%mod)%mod;
      a=c;b=d;
    }else{
      ll c=(a*((2*b-a%mod)%mod))%mod;
      ll d=(a*a%mod+b*b%mod)%mod;
      a=c;b=d;
    }
  }
  res.a=a;res.b=b;
}
int main(){
  cin>>n;
  //if(!n){cout<<0;return 0;}
  fastDoubling(n);
  cout<<res.a;
}

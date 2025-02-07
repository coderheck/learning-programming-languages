#include"iostream"
using namespace std;
#define ll long long
ll c;
ll tcs(ll n){
  ll r=0;
  while(n!=0){r+=n%10;n/=10;}
  return r;
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll a,b;cin>>a>>b;
  for(ll i=a;i<=b;i++){
    if(tcs(i)&1){c++;}
  }
  cout<<c;
}

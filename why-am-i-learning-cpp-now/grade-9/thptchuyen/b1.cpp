#include"iostream"
#define ll long long
using namespace std;
ll tcs(ll n){
  ll r=0;
  while(n!=0){r+=n%10;n/=10;}
  return r;
}
int main(){
  ll n,sech=0;cin>>n;
  for(int i=0;i<n;i++){ll a;cin>>a;sech+=a;}
  cout<<tcs(sech);
}

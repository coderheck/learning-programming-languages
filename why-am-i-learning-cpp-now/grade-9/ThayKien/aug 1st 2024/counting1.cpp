#include"iostream"
using namespace std;
#define ll long long
ll n,cnt[1000000];
int main(){
  cin>>n;
  for(ll i=1;i<=n;i++){
    ll a;cin>>a;
    cnt[a]++;
  }
  for(ll i=0;i<=99;i++){cout<<cnt[i]<<" ";}
}
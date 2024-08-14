#include"iostream"
#include"climits"
using namespace std;
#define ll long long
ll n,cnt[1000000],maxN=LLONG_MIN;
int main(){
  cin>>n;
  for(ll i=1;i<=n;i++){
    ll a;cin>>a;
    if(maxN<a){maxN=a;}
    cnt[a]++;
  }
  bool found=false;
  for(ll i=1;i<=maxN;i++){
    if(cnt[i]==1){cout<<i;found=true;break;}
  }
  if(!found){cout<<-1;}
}

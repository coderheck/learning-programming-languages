#include"iostream"
#include"vector"
using namespace std;
#define ll long long
ll n,m;
int main(){
  cin>>n>>m;vector<ll>cnt(n+2,0);vector<ll>FUCKYOUBITCH;
  for(ll i=0;i<m;i++){ll a;cin>>a;cnt[a]++;}
  for(ll i=1;i<=n;i++){
    if(cnt[i]==0){FUCKYOUBITCH.push_back(i);}
  }
  cout<<FUCKYOUBITCH.size()<<"\n";
  for(ll index:FUCKYOUBITCH){cout<<index<<" ";}
}

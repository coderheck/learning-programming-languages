#include"iostream"
#include"climits"
using namespace std;
#define ll long long
bool nto(ll n){
  if(n<2){return false;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){return false;}
  }
  return true;
}
ll n,cprime=0,maxN=LLONG_MIN,cnt[1000000];
int main(){
  cin>>n;
  for(ll i=1;i<=n;i++){
    ll a;cin>>a;
    if(nto(a)){cprime++;}
    if(a>maxN){maxN=a;}
    cnt[a]++;
  }
  cout<<cprime<<"\n";
  bool found=false;
  for(ll i=1;i<=maxN;i++){
    if(!cnt[i]){cout<<i;found=true;break;}
  }
  if(!found){cout<<maxN+2;}
}
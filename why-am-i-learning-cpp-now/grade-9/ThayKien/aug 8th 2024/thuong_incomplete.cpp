#include"iostream"
#include"map"
#include"climits"
using namespace std;
#define ll long long
ll n,m,maxP=LLONG_MIN;map<ll,ll>cnt;
void PrintMaxPrize(){
  for(auto c:cnt){
    ll currentPrize=c.first*c.second;
    if(currentPrize>maxP){maxP=currentPrize;}
  }
  if(maxP<0){cout<<0;}else{cout<<maxP;}
}
int main(){
  cin>>n>>m;
  for(ll i=1;i<=n;i++){ll a;cin>>a;cnt[a]++;}
  for(ll i=1;i<=m;i++){ll a;cin>>a;cnt[a]--;}
  PrintMaxPrize();
}

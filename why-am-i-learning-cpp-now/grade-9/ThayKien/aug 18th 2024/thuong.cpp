#include"iostream"
#include"map"
#include"climits"
#include"vector"
#include"algorithm"
using namespace std;
#define ll long long
ll n,m,maxP=LLONG_MIN;map<ll,ll>cnt;vector<ll>posA,posB;
void PrintMaxPrize(){
  for(auto c:cnt){
    ll currentPrize=c.first*c.second;
    if(currentPrize>maxP){maxP=currentPrize;}
  }
  if(maxP<0){cout<<0;}else{cout<<maxP;}
}
int main(){
  cin>>n>>m;
  for(ll i=1;i<=n;i++){
    ll a;cin>>a;
    posA.push_back(a);cnt[a]++;
  }
  for(ll i=1;i<=m;i++){
    ll a;cin>>a;
    cnt[a]--;
    posB.push_back(a);
  }
  for(ll a:posA){
    vector<ll>::iterator it;
    it=find(posB.begin(),posB.end(),a);
    if(it!=posB.end()){posB.erase(it);}else{cout<<a<<" ";}
  }
  cout<<"\n";
  PrintMaxPrize();
}

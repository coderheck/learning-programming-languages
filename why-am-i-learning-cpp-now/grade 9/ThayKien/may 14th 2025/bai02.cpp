#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
#define maxP 1000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
ll n,a,prc=0;umap<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  prSieve();
  cin>>n;
  while(n--){
    cin>>a;
    prc+=!pr[a];
    cnt[a]++;
  }
  cout<<prc<<"\n";
  for(ll i=1;;i++){
    if(!cnt[i]){cout<<i;return 0;}
  }
}

#include<iostream>
#include<vector>
using namespace std;
#define ll long long 
ll n,k,a,r=0,cnt[1000005];vector<ll>d(1000005,0);
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>k;
  for(ll i=2;i<=k;i++){
    if(!d[i]){
      d[i]=i;
      for(ll j=i*i;j<=k;j+=i){if(!d[j]){d[j]=i;}}
    }
  }
  for(ll i=2;i<=k;i++){cnt[d[i]]++;}
  while(n--){
    cin>>a;r=0;
//    for(ll i=a;i<=k;i++){r+=(d[i]==a);}
    cout<<cnt[a]<<"\n";
//    cout<<k/a-1/a<<"\n";
  }
}

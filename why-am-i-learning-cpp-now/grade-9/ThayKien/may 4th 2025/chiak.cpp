#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long
ll n,k,res=0,a,s=0;unordered_map<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k;
  cnt[0]=1;
  for(ll i=1;i<=n;i++){
    cin>>a;
    s+=a;
    ll r=(s%k+k)%k;
    res+=cnt[r];
    cnt[r]++;
  }
  cout<<res;
}

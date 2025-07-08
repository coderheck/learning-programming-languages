#include<iostream>
#include<unordered_map>
using namespace std;
#define umap unordered_map
#define ll long long
ll n,m,a[100005],b;umap<ll,ll>cnt;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>m;
  for(ll i=0;i<n;i++){cin>>a[i];}
  for(ll i=0;i<m;i++){cin>>b;cnt[b]++;}
  for(ll i=0;i<n;i++){cout<<cnt[a[i]]<<" ";}
}

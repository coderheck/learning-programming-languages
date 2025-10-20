#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
ll n,m,a[100005],b[100005],res=0,l=0,overlap=0;umap<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>m;
  for(ll i=0;i<n;i++){cin>>a[i];}
  for(ll i=1;i<=m;i++){cin>>b[i];}
  for(ll r=0;r<n;r++){
    cnt[a[r]]++;
    overlap+=(cnt[a[r]]==b[a[r]]+1);
    while(overlap){
      cnt[a[l]]--;
      overlap-=(cnt[a[l]]==b[a[l]]);
      l++;
    }
    res=max(res,r-l+1);
  }
  cout<<res;
}


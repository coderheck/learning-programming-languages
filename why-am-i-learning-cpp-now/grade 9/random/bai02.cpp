#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
ll n,m,a[1000005],b[1000005],ret=0;umap<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>m;
  for(ll i=0;i<n;i++){cin>>a[i];cnt[a[i]]++;}
  for(ll i=0;i<m;i++){
    cin>>b[i];
    if(!cnt[b[i]]){
      ret++;
      cnt[b[i]]=-1;
    }else if(cnt[b[i]]<0){
      ret++;
      cnt[b[i]]--;
    }else{
      cnt[b[i]]--;
    }
  }
  cout<<ret;
}

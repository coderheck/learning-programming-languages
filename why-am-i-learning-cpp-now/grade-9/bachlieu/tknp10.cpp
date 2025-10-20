#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
#define ll long long
#define umap unordered_map
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
ll n,a[100005],l,r,m,res=1000005;
//umap<ll,ll>cnt;
//bool slidingWindow(const ll &len,const ll &val){
//  ll c=0;
//  for(ll i=1;i<=len;i++){c+=(a[i]==val);}
//  if(!c){return false;}
//  for(ll i=len+1;i<=n;i++){
//    c-=(a[i-len]==val);
//    c+=(a[i]==val);
//    if(!c){return false;}
//  }
//  return true;
//}
//ll checkK(const ll &length){
//  for(umap<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
//    if(!slidingWindow(length,i->first)){return false;}
//  }
//  return true;
//}
umap<ll,vector<ll>>poses;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  for(ll i=0;i<n;i++){
    cin>>a[i];
    poses[a[i]].push_back(i);
  }
  for(umap<ll,vector<ll>>::iterator i=poses.begin();i!=poses.end();i++){
    const vector<ll>&pos=i->second;
    ll maxgap=pos[0]+1;
    for(ll j=1;j<pos.size();j++){
      maxgap=max(maxgap,pos[j]-pos[j-1]);
    }
    maxgap=max(maxgap,n-pos.back());
    if(maxgap<res){res=maxgap;}
  }
  cout<<res;
}

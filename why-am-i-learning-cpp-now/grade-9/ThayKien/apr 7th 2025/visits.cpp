#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
struct p{ll idx,val;}d[1000005],v[1000005];
bool ascend(const p &a,const p &b){
  return(a.val<b.val);
}
bool descend(const p &a,const p &b){
  return(a.val>b.val);
}
ll n,m,res=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>m;
  for(ll i=0;i<n;i++){cin>>d[i].val;d[i].idx=i+1;}
  for(ll i=0;i<m;i++){cin>>v[i].val;v[i].idx=i+1;}
  sort(d,d+n,descend);sort(v,v+m,ascend);
  for(ll i=0;i<n;i++){res+=d[i].val*v[i].val;}
  cout<<res<<"\n";
  for(ll i=0;i<n;i++){cout<<d[i].idx<<" ";}
  cout<<"\n";
  for(ll i=0;i<n;i++){cout<<v[i].idx<<" ";}
}
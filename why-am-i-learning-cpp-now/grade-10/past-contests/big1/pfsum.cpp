#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
ll n,b[100005],res=0,l[10],t=1;
umap<ll,ll>cnt;
void pr(){
  ll r=0,r1=res;
  while(res!=0){r++;res/=10;}
  res=r1;cout<<r<<" ";
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  for(ll i=0;i<10;i++){l[i]=t;t*=10;}
  cin>>n;
  for(ll i=0;i<n;i++){cin>>b[i];res+=l[b[i]];pr();}
}

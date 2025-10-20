#include<iostream>
using namespace std;
#define ll long long
ll n,k,m,a[100005],res=0,t=0;
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k>>m;
  for(ll i=0;i<n;i++){cin>>a[i];a[i]=(a[i]<=k);}
  for(ll i=0;i<m;i++){t+=a[i];}
  res+=(t==m);
  for(ll i=m;i<n;i++){
    t=max(t-a[i-m],0);
    t+=a[i];
    res+=(t==m);
  }
  cout<<res;
}

#include<iostream>
using namespace std;
#define ll long long
ll n,k,a[100005],res=0;
bool cut(const ll &m){
  ll c=0;
  for(ll i=0;i<n;i++){
    c+=a[i]/m;
    if(c>=k){return true;}
  }
  return false;
}
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k;
  for(ll i=0;i<n;i++){cin>>a[i];}
  ll l=1,r=1000000000,m;
  while(l<=r){
    m=l+(r-l)/2;
    if(cut(m)){res=m;l=m+1;}else{r=m-1;}
  }
  cout<<res;
}

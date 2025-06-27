#include<iostream>
using namespace std;
#define ll long long
ll max(ll &a,ll &b){return(a>b)?a:b;}
ll min(ll &a,ll &b){return(a<b)?a:b;}
ll n,m,a[1000005],res=100000000;
bool giftacondom(const ll &amount){
  ll c=0;
  for(ll i=0;i<m;i++){c+=a[i]/amount+(a[i]%amount>=1);}
  return c>=n;
}
void bitchsearch(){
  ll l=1,r=10,k,res=r;
  while(l<=r){
    k=l+(r-l)/2;
    if(giftacondom(k)){res=k;l=k+1;}else{r=k-1;}
  }
  cout<<res;
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>m;
  for(ll i=0;i<m;i++){cin>>a[i];}
  bitchsearch();
}
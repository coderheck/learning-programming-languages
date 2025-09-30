/* no seg */
#include<iostream>
#include<vector>
using namespace std;
#define ll long long 
const ll maxN=1000005;
ll n,m,a[maxN],l[maxN],r[maxN],s[maxN],res[maxN];
void sechsech(){
  ll diff[maxN],tot[maxN],cur=0;
  for(ll i=1;i<=n;i++){res[i]=-1;}
  for(ll i=1;i<=m;i++){
    diff[l[i]]+=s[i];
    diff[r[i]+1]-=(r[i]+1<=n)?s[i]:0;
  }
  for(ll i=1;i<=n;i++){cur+=diff[i];tot[i]=cur;}
  for(ll i=1;i<=n;i++){
    if(a[i]<=0){res[i]=0;continue;}
    ll sum=0,ldx=1,rdx=m,ans=-1,mdx;
    while(ldx<=rdx){
      mdx=ldx+rdx>>1,sum=0;
      for(ll j=1;j<=mdx;j++){
        if(l[j]<=i&&i<=r[j]){
          sum+=s[j];
          if(sum>=a[i]){break;}
        }
      }
      if(sum>=a[i]){ans=mdx;rdx=mdx-1;}else{ldx=mdx+1;}
    }
    res[i]=ans;
  }
}
int main(){
  cin.tie(0)->sync_with_stdio(0);;
  cin>>n>>m;
  for(ll i=1;i<=n;i++){cin>>a[i];}
  for(ll i=1;i<=m;i++){cin>>l[i]>>r[i]>>s[i];}
  sechsech();
  for(ll i=1;i<=n;i++){cout<<res[i]<<" ";}
}


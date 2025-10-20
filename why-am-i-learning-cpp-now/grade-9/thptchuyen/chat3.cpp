#include"stdio.h"
#include"algorithm"
using namespace std;
#define ll long long
#define maxN 1000005
ll a[maxN],n,t,x;
void np(){
  ll ans=-1,l=0,r=n-1;
  while(l<=r){
    ll m=l+(r-l)/2;
    if(a[m]<=x){
      ans=a[m];l=m+1;
    }else{r=m-1;}
  }
  printf("%lld\n",ans);
}
int main(){
  // freopen("chat3.inp","r",stdin);
  scanf("%lld",&n);
  for(ll i=0;i<n;i++){scanf("%lld",&a[i]);}
  scanf("%lld",&t);
  sort(a,a+n);
  for(ll c=1;c<=t;c++){
    scanf("%lld",&x);
    np();
  }
}
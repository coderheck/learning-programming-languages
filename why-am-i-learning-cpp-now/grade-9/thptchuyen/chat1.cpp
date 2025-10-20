#include"stdio.h"
#include"algorithm"
using namespace std;
#define ll long long
#define maxN 1000005
ll a[maxN],n,t,x;
ll np(ll l,ll r){
  ll ans=-1;
  while(l<=r){
    int m=l+(r-l)/2;
    if(a[m]<=x){
      ans=m;r=m-1;
    }else{l=m+1;}
  }
  return(ans!=-1)?a[ans]:-1;
}
int main(){
  // freopen("chat1.inp","r",stdin);
  for(ll i=0;i<maxN;i++){a[i]=(i+1)*(i+1)+1;}
  scanf("%lld%lld",&n,&t);
  for(ll c=1;c<=t;c++){
    scanf("%lld",&x);
    printf("%lld\n",np(0,n-1));
  }
}
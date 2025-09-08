#include <iostream>
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxP=1000000;
using namespace std;
bool pr[maxP+5];ll ps[maxP],pc=0;
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=maxP;i++){
    if(!pr[i]){for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}}
  }
  for(ll i=2;i<=maxP;i++){if(!pr[i]){ps[pc++]=i;}}
}
ll n,res=-1,a[maxP+5],sum[maxP+5];
int main(){
  cin.tie(nullptr)->sync_with_stdio(0);
  prSieve();
  sum[0]=0;
  cin>>n;
  for(ll i=1;i<=n;i++){cin>>a[i];sum[i]=sum[i-1]+a[i];}
  for(ll i=0;i<pc;i++){
    for(ll j=i;j<pc;j++){
      ll l=ps[i],r=ps[j];
      if(l>r){continue;}
      res=max(res,sum[r]-sum[l-1]);
    }
  }
  cout<<res;
}

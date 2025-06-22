#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
#define maxP 1000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
ll revn(ll n){
  ll r=0;
  while(n){r=r*10+n%10;n/=10;}
  return r;
}
ll t,a,b,sum[maxP+5],cnt[maxP+5];
umap<ll,ll>mark;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  prSieve();
  cnt[0]=sum[0]=0;
  for(ll i=1;i<=1000000;i++){
    sum[i]=sum[i-1]+((!pr[i])?i:0);
    if(!pr[i]){
      ll rev=revn(i);
      cnt[i]=cnt[i-1]+(i!=rev&&rev<=maxP&&!pr[rev]);
    }else{
      cnt[i]=cnt[i-1];
    }
  }
  cin>>t;
  while(t--){
    cin>>a>>b;
    cout<<sum[b]-sum[a-1]<<" "<<cnt[b]-cnt[a-1]<<"\n";
  }
}

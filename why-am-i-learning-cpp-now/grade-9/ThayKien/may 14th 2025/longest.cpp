#include<iostream>
using namespace std;
#define ll long long
ll n,s,sum[1000005],res=0;
bool wtf(const ll &len){
  for(ll rt=len;rt<=n;rt++){
    if(sum[rt]-sum[rt-len]<=s){return true;}
  }
  return false;
}
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>s;sum[0]=0;
  for(ll i=1;i<=n;i++){cin>>sum[i];sum[i]=sum[i-1]+sum[i];}
  ll l=0,r=n,m;
  while(l<=r){
    m=l+(r-l)/2;
    if(wtf(m)){
      res=m;
      l=m+1;
    }else{
      r=m-1;
    }
  }
  cout<<res;
}

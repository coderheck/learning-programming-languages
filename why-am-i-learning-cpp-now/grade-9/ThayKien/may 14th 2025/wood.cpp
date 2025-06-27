#include<iostream>
using namespace std;
#define ll long long
ll n,m,a[1000005],res=0;
bool check(const ll &h){
  ll w=0;
  for(ll i=0;i<n;i++){
    w+=(a[i]-h>0)?a[i]-h:0;
    if(w>=m){return true;}
  }
  return false;
}
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>m;
  for(ll i=0;i<n;i++){cin>>a[i];}
  ll l=1,r=2000000000,m;
  while(l<=r){
    m=l+(r-l)/2;
    if(check(m)){
      res=m;
      l=m+1;
    }else{
      r=m-1;
    }
  }
  cout<<res;
}

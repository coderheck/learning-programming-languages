#include<iostream>
using namespace std;
#define ll long long
ll n,m,a[100005],l=1,r=1000000000,mid,res=0;
bool check(const ll &x){
  ll t=0;
  for(ll i=0;i<m;i++){
    t+=(a[i]+x-1)/x;
    if(t>n){return false;}
  }
  return t<=n;
}
int main(){
  cin>>n>>m;
  for(ll i=0;i<m;i++){cin>>a[i];}
  while(l<=r){
    mid=l+(r-l)/2;
    if(check(mid)){
      res=mid;
      r=mid-1;
    }else{
      l=mid+1;
    }
  }
  cout<<res;
}

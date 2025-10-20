#include<iostream>
using namespace std;
#define ll long long
ll n,k,a[100005],res=-1;
bool check(const ll &m){
  ll bx=1,cm=0;
  for(ll i=0;i<n;i++){
    if(a[i]>m){return false;}
    if(cm+a[i]>m){
      bx++;cm=a[i];
      if(bx>k){return false;}
    }else{
      cm+=a[i];
    }
  }
  return true;
}
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k;
  for(ll i=0;i<n;i++){cin>>a[i];}
  ll l=1,r=3000000000,m;
  while(l<=r){
    m=l+(r-l)/2;
    if(check(m)){
      res=m;
      r=m-1;
    }else{
      l=m+1;
    }
  }
  cout<<res;
}

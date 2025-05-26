#include<iostream>
using namespace std;
#define ll long long
ll n,k,a[100005],l=1,r=1000000000,m,res=0;
bool check(const ll &len){
  ll c=0;
  for(ll i=0;i<n;i++){
    c+=a[i]/len;
    if(c>=k){return true;}
  }
  return false;
}
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k;
  for(ll i=0;i<n;i++){cin>>a[i];}
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

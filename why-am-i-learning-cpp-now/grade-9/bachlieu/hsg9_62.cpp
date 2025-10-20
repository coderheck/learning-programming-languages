#include<iostream>
using namespace std;
#define ll long long
ll s,n,a[20];
bool check(const ll &m){
  ll c=0;
  for(ll i=0;i<n;i++){
    c+=m/a[i];
    if(c>=s){return true;}
  }
  return false;
}
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>s>>n;
  for(ll i=0;i<n;i++){cin>>a[i];}
  ll l=0,r=500*s,m,res=r;
  while(l<=r){
    m=l+(r-l)/2;
    if(check(m)){res=m;r=m-1;}else{l=m+1;}
  }
  cout<<res;
}

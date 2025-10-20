#include<iostream>
using namespace std;
#define ll long long
ll n,m,a[300005],am,res=0;
bool check(){
  ll c=0;
  for(ll i=0;i<m;i++){
    c+=(a[i]+am-1)/am;
    if(c>n){return false;}
  }
  return true;
}
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>m;
  for(ll i=0;i<m;i++){cin>>a[i];}
  ll l=1,r=1000000000;
  while(l<=r){
    am=l+(r-l)/2;
    if(check()){res=am;r=am-1;}else{l=am+1;}
  }
  cout<<res;
}

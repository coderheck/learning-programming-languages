#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
ll n,k,res=-100000000,l[1000005];
bool good(const ll &a){
  ll c=0;
  for(ll i=0;i<n;i++){
    c+=l[i]/a;
    if(c>=k){return true;}
  }
  return false;
}
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k;
  for(ll i=0;i<n;i++){cin>>l[i];}
  ll l=0,r=1000000000,m;
  while(l<=r){
    m=l+(r-l)/2;
    if(good(m)){res=m;l=m+1;}else{r=m-1;}
  }
  cout<<res;
}

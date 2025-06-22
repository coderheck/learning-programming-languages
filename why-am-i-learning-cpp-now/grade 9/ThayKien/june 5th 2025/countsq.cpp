#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
bool cp(const ll &n){
  ll sq=sqrt(n);
  return(sq*sq==n);
}
ll t,n,cnt[1000005];
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cnt[0]=0;
  for(ll i=1;i<=1000000;i++){cnt[i]=cnt[i-1]+cp(i);}
  cin>>t;
  while(t--){cin>>n;cout<<cnt[n]<<"\n";}
}

#include<iostream>
using namespace std;
#define ll long long
bool is2025(const ll& n){
  ll a=0,b=0,f=10;
  while(f<=n){
    a=n/f;b=n%f;
    if((a+b)*(a+b)==n&&a>0){return true;}
    f*=10;
  }
  return false;
}
ll m,n,mp[10000005];
void preproc(){
  mp[0]=0;
  for(ll i=1;i<=1000000;i++){
    mp[i]=mp[i-1]+(is2025(i)?i:0);
  }
  // 1000001 -> 10000000: 4941729, 7441984
  for(ll i=1000001;i<=4941729;i++){mp[i]=mp[i-1];}
  mp[4941729]+=4941729;
  for(ll i=4941730;i<=7441984;i++){mp[i]=mp[i-1];}
  mp[7441984]+=7441984;
  for(ll i=7441985;i<=10000000;i++){mp[i]=mp[i-1];}
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  preproc();
  cin>>m;
  while(m--){cin>>n;cout<<mp[n]-(is2025(n)?n:0)<<" ";}
}

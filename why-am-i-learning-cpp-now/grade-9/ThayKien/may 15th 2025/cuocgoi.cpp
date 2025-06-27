#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
bool ldder(ll n){
  if(n<=10){return false;}
  ll d=n%10;
  while(n!=0){
    if(d<=(n/10)%10){return false;}
    d=(n/10)%10;n/=10;
  }
  return true;
}
ll n,k,a,c=0;umap<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k;
  while(n--){cin>>a;cnt[a]++;}
  while(k--){
    cin>>a;
    if(ldder(cnt[a])){cout<<a<<" "<<cnt[a]<<"\n";c++;}
  }
  if(!c){cout<<"0 0";}
}

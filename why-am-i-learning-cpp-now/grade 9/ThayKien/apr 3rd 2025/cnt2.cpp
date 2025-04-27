#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long
ll n,k,m,a,res=0;unordered_map<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k>>m;
  while(n--){cin>>a;cnt[a]++;}
  for(unordered_map<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
    res+=(i->second>k&&i->second<=m);
  }
  cout<<res;
}
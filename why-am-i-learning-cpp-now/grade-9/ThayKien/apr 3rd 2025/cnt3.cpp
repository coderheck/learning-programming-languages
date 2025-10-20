#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;
#define ll long long
ll n,k,a,res=INT_MAX;unordered_map<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k;
  while(n--){cin>>a;cnt[a]++;}
  for(unordered_map<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
    if(i->second>=k&&i->second<res){res=i->second;}
  }
  if(res!=INT_MAX){cout<<res;}else{cout<<-1;}
}
#include<iostream>
#include<map>
using namespace std;
#define ll long long
ll m,n,x,res=0,a,b;map<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>m>>n>>x;
  while(m--){cin>>a;cnt[a]++;}
  for(ll i=0;i<n;i++){
    cin>>b;
    res+=cnt[x-b];
  }
  cout<<res;
}

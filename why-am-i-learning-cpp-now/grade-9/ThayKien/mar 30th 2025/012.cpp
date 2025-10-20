#include<iostream>
using namespace std;
#define ll long long
ll n,m,a,cnt[100005],p=0;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>m;
  for(ll i=1;i<=m;i++){cin>>a;p+=(!cnt[a]);cnt[a]++;}
  cout<<n-p<<"\n";
  for(ll i=1;i<=n;i++){if(!cnt[i]){cout<<i<<" ";}}
}
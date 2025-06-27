#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
#define ll long long
ll n,m,d[100005],v[100005],res=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>m;
  for(ll i=0;i<n;i++){cin>>d[i];}
  for(ll i=0;i<m;i++){cin>>v[i];}
  sort(d,d+n,greater<ll>());sort(v,v+m);
  for(ll i=0;i<n;i++){res+=d[i]*v[i];}
  cout<<res;
}
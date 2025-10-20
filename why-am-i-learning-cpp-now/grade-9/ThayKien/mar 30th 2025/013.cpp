#include<iostream>
using namespace std;
#define ll long long
ll n,m,a,cnt[105];
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>m;
  for(ll i=0;i<=100;i++){cnt[i]=1;}
  while(n--){cin>>a;cout<<cnt[a]<<" ";cnt[a]++;}
}
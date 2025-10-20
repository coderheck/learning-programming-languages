#include<iostream>
using namespace std;
#define ll long long
ll n,a,cnt[105];
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  while(n--){cin>>a;cnt[a]++;}
  for(ll i=0;i<100;i++){cout<<cnt[i]<<" ";}
}
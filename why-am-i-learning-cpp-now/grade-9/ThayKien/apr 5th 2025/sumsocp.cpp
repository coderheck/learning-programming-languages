#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long
ll n,a,amax=-1,sum=0;unordered_map<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  while(n--){cin>>a;if(a>amax){amax=a;};cnt[a]++;}
  for(ll i=1;i*i<=amax;i++){if(!cnt[i*i]){sum+=i*i;}}
  cout<<sum;
}
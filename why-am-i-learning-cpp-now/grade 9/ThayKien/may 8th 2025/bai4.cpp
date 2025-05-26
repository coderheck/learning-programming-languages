#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long
ll n,sum=0,a,res=0;unordered_map<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  cnt[0]=1;
  for(ll i=1;i<=n;i++){
    cin>>a;sum+=a;
    res+=cnt[-sum];
    cnt[-sum]++;
  }
  cout<<res;
}

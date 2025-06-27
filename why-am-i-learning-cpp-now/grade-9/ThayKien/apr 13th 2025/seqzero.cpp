#include<iostream>
#include<map>
using namespace std;
#define ll long long
ll n,a[100005],sum=0,res=0;map<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  cnt[0]=1;
  for(ll i=1;i<=n;i++){
    cin>>a[i];
    sum+=a[i];
    res+=cnt[sum];
    cnt[sum]++;
  }
  cout<<res;
}

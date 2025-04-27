#include<iostream>
#include<map>
using namespace std;
#define ll long long
ll n,d,a,sum=0,res=0;map<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>d>>n;
  cnt[0]=1;
  for(ll i=1;i<=n;i++){
    cin>>a;
    sum+=a;
    ll r=sum%d;
    r+=(r<0)?d:0;
    res+=cnt[r];
    cnt[r]++;
  }
  cout<<res;
}

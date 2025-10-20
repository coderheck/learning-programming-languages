#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
ll n,s,sum[100005],res=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>s;sum[0]=0;
  for(ll i=1;i<=n;i++){cin>>sum[i];sum[i]=sum[i-1]+sum[i];}
  for(ll j=1;j<=n;j++){
    ll lo=lower_bound(sum,sum+j,sum[j]-s)-sum;
    res+=lo;
    ll hi=upper_bound(sum,sum+j,sum[j]+s)-sum;
    res+=j-hi;
  }
  cout<<res;
}


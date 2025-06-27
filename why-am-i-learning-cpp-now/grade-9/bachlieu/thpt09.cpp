#include<iostream>
using namespace std;
#define ll long long
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
ll min(const ll &a,const ll &b){return(a<b)?a:b;}
ll n,a[1000005],minA=1000000007,res=-10000000007;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  for(ll i=0;i<n;i++){cin>>a[i];}
  minA=a[0];
  for(ll i=1;i<n;i++){
    res=max(res,a[i]-minA);
    minA=min(minA,a[i]);
  }
  cout<<res;
}

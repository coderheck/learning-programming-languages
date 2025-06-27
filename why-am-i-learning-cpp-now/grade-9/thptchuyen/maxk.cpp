#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
int main(){
  ll n,k,t=0;cin>>n>>k;ll a[n];
  for(ll i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  for(ll i=n-1;i>=n-k;i--){t+=a[i];}
  cout<<t;
}
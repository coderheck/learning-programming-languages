#include<iostream>
using namespace std;
#define ll long long
ll gcd(const ll &a,const ll &b){return(!b)?a:gcd(b,a%b);}
ll lcm(const ll &a,const ll &b){return(a/gcd(a,b))*b;}
ll n,a[1000005],res=1;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  for(ll i=0;i<n;i++){cin>>a[i];}
  for(ll i=0;i<n;i++){res=lcm(res,a[i]);}
  cout<<res<<"\n";
  for(ll i=0;i<n;i++){cout<<res/a[i]<<" ";}
}

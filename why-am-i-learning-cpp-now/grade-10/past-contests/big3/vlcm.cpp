#include<iostream>
using namespace std;
#define ll long long
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
ll min(const ll& a,const ll& b){return(a<b)?a:b;}
ll gcd(const ll& a,const ll& b){return(!b)?a:gcd(b,a%b);}
ll lcm(const ll& a,const ll& b){return(a/gcd(a,b))*b;}
ll t,n;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>t;
  while(t--){
    ll a,b,tm=1000000007;
    cin>>n;
    for(ll i=1;i*i<=n;i++){
      if(n%i==0){
        ll lc=lcm(i,n-i),j=n/i;;
        if(lc<tm&&i&&n-i){tm=lc,a=i,b=n-i;}
        if(i!=j){
          lc=lcm(j,n-j);
          if(lc<tm&&j&&n-j){tm=lc,a=j,b=n-j;}
        }
      }
    }
    cout<<a<<" "<<b<<"\n";
  }
}

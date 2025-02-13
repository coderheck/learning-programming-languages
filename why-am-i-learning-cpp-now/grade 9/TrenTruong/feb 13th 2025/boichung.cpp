#include"iostream"
using namespace std;
#define ll long long
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return(a/gcd(a,b))*b;}
ll max(ll a,ll b){return(a>b)?a:b;}
ll min(ll a,ll b){return(a<b)?a:b;}
ll m,n;
int main(){
  cin>>m>>n;
  if(min(m,n)==m){
    for(ll i=m;i<=m*n;i+=m){
      if(i%n==0){cout<<i<<" ";}
    }
  }else{
    for(ll i=n;i<=m*n;i+=n){
      if(i%m==0){cout<<i<<" ";}
    }
  }
}
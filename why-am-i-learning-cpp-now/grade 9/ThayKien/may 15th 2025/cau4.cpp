#include<iostream>
using namespace std;
#define ll long long
ll gcd(ll a,ll b){return(!b)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return(a/gcd(a,b))*b;}
ll n,a,b,lc,sa=0,sb=0,sab=0;
ll sum(const ll &div){
  ll c=n/div;
  return div*c*(c+1)/2;
}
int main(){
  if(fopen("cau4.inp","r")){
    freopen("cau4.inp","r",stdin);
    freopen("cau4.out","w",stdout);
  }
  cin>>n>>a>>b;
  lc=lcm(a,b);
  sa=sum(a);sb=sum(b);sab=sum(lc);
  cout<<sa+sb-sab;
}

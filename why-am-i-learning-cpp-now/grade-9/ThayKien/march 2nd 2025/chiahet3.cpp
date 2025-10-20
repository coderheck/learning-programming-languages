#include<iostream>
using namespace std;
#define ll long long
ll gcd(const ll &a,const ll &b){return(!b)?a:gcd(b,a%b);}
ll lcm(const ll &a,const ll &b){return(a/gcd(a,b))*b;}
ll n,a,b,c,lc;
int main(){
  cin>>n>>a>>b>>c;
  lc=lcm(a,b);
  cout<<n/lc-n/lcm(lc,c);
}
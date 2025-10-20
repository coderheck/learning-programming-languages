#include<iostream>
using namespace std;
#define ll long long
ll gcd(const ll &a,const ll &b){return(!b)?a:gcd(b,a%b);}
ll lcm(const ll &a,const ll &b){return(a/gcd(a,b))*b;}
ll n,a,b,c,ab,bc,ac,abc;
int main(){
  cin>>n>>a>>b>>c;
  ab=lcm(a,b),bc=lcm(b,c),ac=lcm(a,c),abc=lcm(a,lcm(b,c));
  cout<<n/ab+n/bc+n/ac-n/abc;
}

#include<iostream>
using namespace std;
#define ll long long
ll l,r,a,b,lc;
ll gcd(const ll &a,const ll &b){return(!b)?a:gcd(b,a%b);}
ll lcm(const ll &a,const ll &b){return(a/gcd(a,b))*b;}
int main(){
  cin>>l>>r>>a>>b;
  lc=lcm(a,b);
  cout<<r/lc-(l-1)/lc;
}
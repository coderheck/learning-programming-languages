#include<iostream>
using namespace std;
#define ll long long
ll n,a,b;
ll gcd(const ll &a,const ll &b){return(!b)?a:gcd(b,a%b);}
ll lcm(const ll &a,const ll &b){return(a/gcd(a,b))*b;}
int main(){
  cin>>n>>a>>b;
  cout<<n/a-n/lcm(a,b);
}
#include<iostream>
using namespace std;
#define ll long long
ll gcd(const ll &a,const ll &b){return(!b)?a:gcd(b,a%b);}
ll lcm(const ll &a,const ll &b){return(a/gcd(a,b))*b;}
ll n,a,b,c,AB,ABC;
int main(){
  cin>>n>>a>>b>>c;
  AB=lcm(a,b);ABC=lcm(AB,c);
  cout<<n/AB-n/ABC;
}

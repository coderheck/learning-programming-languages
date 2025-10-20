#include<iostream>
using namespace std;
#define ll long long
ll gcd(const ll &a,const ll &b){return(!b)?a:gcd(b,a%b);}
ll lcm(const ll &a,const ll &b){return(a/gcd(a,b))*b;}
ll a,b,lc;
int main(){
  cin>>a>>b;
  lc=lcm(a,b);
  cout<<lc<<"\n"<<lc/a<<" "<<lc/b;
}

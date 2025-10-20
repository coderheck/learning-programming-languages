#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
ll gcd(const ll &a,const ll &b){return(!b)?a:gcd(b,a%b);}
ll a,b,c;
int main(){
  cin>>a>>b>>c;
  cout<<gcd(abs(a-b),abs(b-c));
}

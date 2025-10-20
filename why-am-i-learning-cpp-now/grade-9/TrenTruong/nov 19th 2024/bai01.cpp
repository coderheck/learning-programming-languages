#include"iostream"
using namespace std;
#define ll long long
ll l,r,a,b;
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return(a/gcd(a,b))*b;}
int main(){
  cin>>l>>r>>a>>b;
  ll lcmAB=lcm(a,b);
  cout<<r/lcmAB-l/lcmAB;
}
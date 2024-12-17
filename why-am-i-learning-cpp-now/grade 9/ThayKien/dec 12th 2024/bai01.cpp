#include"iostream"
using namespace std;
#define ll long long
ll n,a,b,c;
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return(a/gcd(a,b))*b;}
int main(){
  cin>>n>>a>>b>>c;
  ll resABC=n/lcm(a,lcm(b,c));
  ll resAB=n/lcm(a,b)-resABC;
  ll resBC=n/lcm(b,c)-resABC;
  ll resAC=n/lcm(a,c)-resABC;
  cout<<resAB+resAC+resBC;
}
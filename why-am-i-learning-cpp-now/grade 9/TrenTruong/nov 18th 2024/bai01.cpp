#include"iostream"
using namespace std;
#define ll long long
ll gcd(ll a, ll b){return(b==0)?a:gcd(b,a%b);}
ll lcm(ll a, ll b){return(a/gcd(a,b))*b;}
int main(){
  ll n,a,b,c;cin>>n>>a>>b>>c;
  ll divABC=n/lcm(a,lcm(b,c));
  cout<<((n/lcm(a,b))-divABC)+((n/lcm(b,c))-divABC)+((n/lcm(a,c))-divABC);
}
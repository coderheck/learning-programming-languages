#include"iostream"
using namespace std;
#define ll long long
ll x,y,z;
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return(a/gcd(a,b))*b;}
int main(){
  cin>>x>>y>>z;
  cout<<lcm(x,lcm(y,z));
}
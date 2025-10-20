#include"iostream"
using namespace std;
#define ll long long
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return(a/gcd(a,b))*b;}
ll a,b,x,y,lc;
int main(){
  cin>>a>>b>>x>>y;
  lc=lcm(x,y);
  cout<<(b/x-(a-1)/x)+(b/y-(a-1)/y)-(b/lc-(a-1)/lc);
}
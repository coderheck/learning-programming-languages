#include"iostream"
using namespace std;
#define ll long long
ll a,b,x,y;
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return(a/gcd(a,b))*b;}
int main(){
  cin>>a>>b>>x>>y;
  ll XY=lcm(x,y);
  ll xans=b/x-(a-1)/x,yans=b/y-(a-1)/y,xyans=b/XY-(a-1)/XY;
  cout<<xans+yans-xyans;
}
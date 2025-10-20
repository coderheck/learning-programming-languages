#include"iostream"
#include"vector"
using namespace std;
#define ll long long
#define e12 1000000000000
vector<ll>lucky;
void genLucky(ll n) {
  if(n>0){lucky.push_back(n);}
  if(n>e12)return;
  genLucky(n*10+6);
  genLucky(n*10+8);
}
int c=0;ll a,b;
int main(){
  if(fopen("lucky.inp","r")){
    freopen("lucky.inp","r",stdin);
    freopen("lucky.out","w",stdout);
  }
  cin>>a>>b;
  genLucky(0);
  for(ll x:lucky) {
    if(x>=a&&x<=b){c++;}
  }
  cout<<c;
}
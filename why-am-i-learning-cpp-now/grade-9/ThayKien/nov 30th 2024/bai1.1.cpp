#include"iostream"
using namespace std;
#define ll long long
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll a,b,x=0,lol;
int main(){
  if(fopen("bai11.inp","r")){
    freopen("bai11.inp","r",stdin);
    freopen("bai11.out","w",stdout);
  }
  cin>>a>>b;
  lol=b-a;
  x=((-a%lol)+lol)%lol;
  // x=d-a%d;
  cout<<x;
}
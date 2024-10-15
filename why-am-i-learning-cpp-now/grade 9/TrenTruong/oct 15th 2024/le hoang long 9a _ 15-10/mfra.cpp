#include"stdio.h"
using namespace std;
#define ll long long
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll a,b;
int main(){
  if(fopen("mfra.inp","r")){
    freopen("mfra.inp","r",stdin);
    freopen("mfra.out","w",stdout);
  }
  scanf("%lld%lld",&a,&b);
  ll d=gcd(a,b);
  printf("%lld %lld",a/d,b/d);
}
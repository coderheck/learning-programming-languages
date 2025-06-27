#include"stdio.h"
using namespace std;
#define ll long long
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll a,b,gc;
int main(){
  scanf("%lld%lld",&a,&b);
  if(a==0){printf("%lld %lld",a,b);return 0;}
  gc=gcd(a,b);
  a/=gc;b/=gc;
  if(b==0){printf("ERROR");return 0;}
  if(b<0){
    if(a>=0){a*=-1;b*=-1;}
  }
  printf("%lld %lld",a,b);
}
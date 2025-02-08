#include"stdio.h"
using namespace std;
#define ll long long
ll max(ll a,ll b){return(a>b)?a:b;}
ll a,b,j,at=0,bt=0;
int main(){
  scanf("%lld%lld",&a,&b);
  if(max(a,b)==a){
    for(ll i=1;i*i<=a;i++){
      if(a%i==0){at+=i;j=a/i;if(j!=i){at+=j;}}
      if(b%i==0&&i*i<=b){bt+=i;j=b/i;if(j!=i){bt+=j;}}
    }
  }else{
    for(ll i=1;i*i<=a;i++){
      if(a%i==0){at+=i;j=a/i;if(j!=i){at+=j;}}
      if(b%i==0&&i*i<=b){bt+=i;j=b/i;if(j!=i){bt+=j;}}
    }
  }
  printf("%d",a==bt||b==at);
}
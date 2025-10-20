#include<stdio.h>
#define ll long long
ll min(const ll &a,const ll &b){return(a<b)?a:b;}
ll n,a,minle=1000000007,oc=0,ec=0,so=0,se=0;
int main(){
  scanf("%lld",&n);
  while(n--){
    scanf("%lld",&a);
    (a&1)?(oc++,so+=a,minle=min(minle,a)):(ec++,se+=a);
  }
  printf("%lld",se+((so&1)?so-minle:so));
}

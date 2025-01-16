#include"stdio.h"
#define ll long long
using namespace std;
ll n,res=0;
int main(){
  scanf("%lld",&n);
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      res+=1+(i!=n/i);
    }
  }
  printf("%lld",res);
}
#include"stdio.h"
using namespace std;
typedef long long ll;
ll n;
void eulerphi(){
  ll res=n;
  for(ll p=2;p*p<=n;p++){
    if(n%p==0){
      while(n%p==0){n/=p;}
      res-=res/p;
    }
  }
  if(n>1){res-=res/n;}
  printf("%lld",res);
}
int main(){
  scanf("%lld",&n);
  eulerphi();
}
#include"stdio.h"
using namespace std;
#define ll long long
ll n,c=0,i=5;
int main(){
  scanf("%lld",&n);
  while(i<=n){
    c+=n/i;i*=5;
  }
  printf("%lld",c);
}
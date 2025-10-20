#include"stdio.h"
using namespace std;
#define ll long long
ll n;
int main(){
  scanf("%lld",&n);
  int rem=n%10;
  if(rem==0){printf("%lld",n);return 0;}
  if(rem<=5){
    printf("%lld",n-rem);
  }else{
    printf("%lld",n-rem+10);
  }
}
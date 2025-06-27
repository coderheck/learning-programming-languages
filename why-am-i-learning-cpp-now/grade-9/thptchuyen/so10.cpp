#include"stdio.h"
using namespace std;
#define ll long long
ll a,b;
int main(){
  scanf("%lld%lld",&a,&b);
  printf("%lld",(a+b)*(b-a+1)/2);
}
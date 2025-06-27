#include"stdio.h"
using namespace std;
#define ll long long
ll n;
int main(){
  scanf("%lld",&n);
  printf("%lld",(n%2==0)?n/2:n/2-n);
}
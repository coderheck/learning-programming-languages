#include"stdio.h"
#include"cmath"
#include"climits"
#include"algorithm"
using namespace std;
#define ll long long
#define maxN 100000
int n,q;ll a[maxN+1],x;
int main(){
  scanf("%lld",&n);
  for(int i=0;i<n;i++){scanf("%lld",&a[i]);}
  sort(a,a+n);
  scanf("%lld",&q);
  while(q--){
    scanf("%lld",&x);
    ll minDiff=10000000001;
    ll *pos=lower_bound(a,a+n,x);
    if(pos!=a+n){minDiff=min(minDiff,abs(x-*pos));}
    if(pos!=a){minDiff=min(minDiff,abs(x-*(pos-1)));}
    printf("%lld\n",minDiff);
  }
}

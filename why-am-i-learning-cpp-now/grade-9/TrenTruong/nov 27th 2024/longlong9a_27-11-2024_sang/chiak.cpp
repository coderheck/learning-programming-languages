#include"stdio.h"
#include"unordered_map"
using namespace std;
#define ll long long
#define maxN 100000000
ll k,n,a[maxN+5],res=0,sum=0;
unordered_map<ll,ll>cnt;
int main(){
  scanf("%lld%lld",&n,&k);
  cnt[0]=1;
  for(int i=0;i<n;i++){
    scanf("%lld",&a[i]);
    sum+=a[i];
    ll r=((sum%k)+k)%k;
    res+=cnt[r];
    cnt[r]++;
  }
  printf("%lld",res);
}
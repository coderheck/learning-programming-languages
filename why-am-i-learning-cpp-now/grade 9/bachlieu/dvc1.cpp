#include"stdio.h"
#include"unordered_map"
using namespace std;
#define ll long long
#define maxN 2000000
ll n,res=0,k,a,sum=0,r;
unordered_map<ll,ll>cnt;
int main(){
  scanf("%d%lld",&n,&k);
  cnt.reserve(maxN);
  cnt[0]=1;
  for(int i=0;i<n;i++){
    scanf("%lld",&a);
    sum+=a;
    r=(sum%k+k)%k;
    res+=cnt[r];
    cnt[r]++;
  }
  printf("%d",res);
}
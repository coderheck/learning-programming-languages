#include<cstdio>
using namespace std;
#define ll long long
const ll offset=1000000;
ll n,t,b,res=0,a,cnt[2000005];
int main(){
  scanf("%lld%lld",&n,&b);
  for(ll i=0;i<n;i++){
    scanf("%lld",&a);
    t=b-a;
    if(-offset<=t&&t<=offset){res+=cnt[t+offset];}
    cnt[a+offset]++;
  }
  printf("%lld",res);
}

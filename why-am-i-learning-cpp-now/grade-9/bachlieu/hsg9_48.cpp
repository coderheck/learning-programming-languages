#include<stdio.h>
#include<unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
ll n,s,a,res=0;umap<ll,ll>cnt;
int main(){
  cnt.reserve(1000005);
  scanf("%lld%lld",&n,&s);
  for(ll i=0;i<n;i++){
    scanf("%lld",&a);
    res+=cnt[s-a];
    cnt[a]++;
  }
  printf("%lld",res);
}

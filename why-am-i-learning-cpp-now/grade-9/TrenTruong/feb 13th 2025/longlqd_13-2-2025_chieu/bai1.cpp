#include"cstdio"
using namespace std;
#define ll long long
ll m,n,mt=0,nt=0;
int main(){
  scanf("%lld%lld",&m,&n);
  for(ll i=2;i*i<=m;i++){if(m%i==0){mt+=i;ll j=m/i;if(j!=i){mt+=j;}}}
  for(ll i=2;i*i<=n;i++){if(n%i==0){nt+=i;ll j=n/i;if(j!=i){nt+=j;}}}
  printf(mt==nt&&mt!=0?"YES":"NO");
}
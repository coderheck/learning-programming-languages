#include <stdio.h> // final boss of mem and time saves
#define ll long long 
const ll maxN=1000005;
const ll modN=1000007;
ll n,f[maxN];
ll memo_fib(ll n){ // uses recursion
  if(n<2){return n;} // base case
  if(!f[n]){
    f[n]=(memo_fib(n-1)+memo_fib(n-2))%modN;
  }
  return f[n];
}
ll iter_fib(ll n){ // uses iteration
  f[0]=f[1]=1; // base case
  for(ll i=2;i<=n;i++){f[i]=(f[i-1]+f[i-2])%modN;}
  return f[n-1]; // compensate for 0-based indexing
}
int main(){
  scanf("%lld",&n);
  printf("%lld",iter_fib(n));
}

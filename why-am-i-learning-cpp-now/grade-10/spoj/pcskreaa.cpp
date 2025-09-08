#include<iostream>
#include <map>
#define ll long long 
ll cycle(const ll& n1){
  ll c=1,n=n1;
  while(n!=1){
    if(n&1){n=n*3+1;}else{n>>=1;}
    c++;
  }
  return c;
}
std::map<ll,ll>cnt;
int main(){
  std::cin.tie(0)->sync_with_stdio(0);
  for(ll i=1;i<=1000;i++){cnt[cycle(i)]++;}
  for(std::map<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){std::cout<<i->first<<" "<<i->second<<"\n";}
}

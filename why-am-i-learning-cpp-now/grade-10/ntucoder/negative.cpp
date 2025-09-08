#include <iostream>
#define ll long long 
ll n,t;
int main(){
  std::cin.tie(0)->sync_with_stdio(0);
  std::cin>>t;
  while(t--){
    std::cin>>n;
    std::cout<<(n&~n)<<"\n";
  }
}

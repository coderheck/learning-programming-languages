#include <iostream>
int main(){long long n;std::cin.tie(nullptr)->sync_with_stdio(false);std::cin>>n;while(n!=1){std::cout<<n<<" ";if(n&1){n*=3,n++;}else{n>>=1;}}std::cout<<1;}

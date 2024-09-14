#include"iostream"
using namespace std;
long long fastpowmod(long long a, unsigned long long b, long long c){
  long long res=1; a%=c;
  if(a==0)return 0;
  while(b>0){
    if(b&1){res=(res*a)%c;} // b & 1 == !(b % 2)
    b>>=1; a=(a*a)%c;  // b >>= 1 == b /= 2
  }
  return res;
}
#define ll long long
int main(){
  ll a,b,c;cin>>a>>b>>c;cout<<fastpowmod(a,b,c);
}

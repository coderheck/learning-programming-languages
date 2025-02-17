#include"iostream"
using namespace std;
#define ll long long
ll fastpowmod(ll a,ll b,ll c){
  a%=c;if(a==0){return 0;}
  ll res=1;
  while(b>0){
    if(b&1){res=(res*a)%c;}
    a=(a*a)%c;b>>=1;
  }
  return res;
}
ll a,n;
int main(){
  cin>>a>>n;
  cout<<fastpowmod(a,n,10);
}
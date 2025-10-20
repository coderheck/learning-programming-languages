#include"iostream"
using namespace std;
#define ll unsigned long long
ll fastpowmod(ll a,ll b,ll c){
  ll res=1;a%=c;
  while(b>0){
    if(b&1){res=(res*a)%c;}
    a=a*a;b>>=1;
  }
  return res;
}
ll a,b;
int main(){
  cin>>a>>b;
  ll st=fastpowmod(a,b,100),
     nd=fastpowmod(b,a,100),
     sum=st+nd,
     res=sum%100;
  if(res/10==0){cout<<0<<res;}else{cout<<res;}
}
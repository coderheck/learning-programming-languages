#include"iostream"
using namespace std;
#define ll long long
ll fastpowmod(ll a, unsigned ll b, ll c){
  ll res=1; a%=c;
  if(a==0)return 0;
  while(b>0){
    if(b&1){res=(res*a)%c;}
    b>>=1; a=(a*a)%c;
  }
  return res;
}
int main(){
  ll a,b,c;cin>>a>>b>>c;
  cout<<fastpowmod(a,b,c);
}

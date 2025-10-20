#include"iostream"
using namespace std;
#define ll long long
ll a,b,c;
ll fastpowmod(ll a, unsigned ll b, ll c){
  ll res=1; a%=c;
  if(a==0)return 0;
  while(b>0){
    if(b%2==1){res=(res*a)%c;}
    b/=2;a=(a*a)%c;
  }
  return res;
}
int main(){
  cin>>a>>b>>c;
  cout<<fastpowmod(a,b,c);
}
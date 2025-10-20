#include"iostream"
#include"cmath"
using namespace std;
#define ll long long
ll n;
ll tcs(ll x){
  ll ret=0;
  while(x!=0){ret+=x%10;x/=10;}
  return ret;
}
ll cp(ll x){
  ll a=sqrt(x);
  return(a*a==x);
}
int main(){
  if(fopen("bai03.inp","r")){
    freopen("bai03.inp","r",stdin);
    freopen("bai03.out","w",stdout);
  }
  cin>>n;
  ll tc=tcs(n);
  (cp(tc))?cout<<tc:cout<<tc%11;
}
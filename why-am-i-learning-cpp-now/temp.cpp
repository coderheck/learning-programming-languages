#include"iostream"
#include"cmath"
#include"climits"
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
  if(fopen("temp.inp","r")){
    freopen("temp.inp","r",stdin);
    //freopen("temp.out","w",stdout);
  }
  n=LLONG_MAX-2;
  ll tc=tcs(n);
  (cp(tc))?cout<<tc:cout<<tc%11;
}

#include"iostream"
#include"iomanip"
using namespace std;
#define ll long long
bool nto(ll n){
  if(n<2){return false;}
  for(ll i=2;i*i<=n;i++){
    if(!(n%i)){return false;}
  }
  return true;
}
unsigned ll tlp(ll n){
  unsigned ll ret=0;
  while(n!=0){ret+=(n%10)*(n%10)*(n%10);n/=10;}
  return ret;
}
unsigned ll tcs(ll n){
  unsigned ll ret=0;
  while(n!=0){ret+=n%10;n/=10;}
  return ret;
}
bool good(ll n){
  return(nto(n)&&nto(tcs(n)));
}
int main(){
  if(fopen("cau2.inp","r")){
    freopen("cau2.inp","r",stdin);
    freopen("cau2.out","w",stdout);
  }
  ll n;cin>>n;
  cout<<tlp(n)<<" "<<good(n);
}
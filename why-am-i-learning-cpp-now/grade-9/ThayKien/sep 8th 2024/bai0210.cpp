#include"iostream"
using namespace std;
#define maxN 10000001
#define ll long long
bool pr[maxN];
void prSieve(){
  for(ll i=2;i<maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(ll i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(ll j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
ll revN(ll n){
  ll ret=0;
  while(n!=0){ret*=10;ret+=(n%10);n/=10;}
  return ret;
}
int main(){
  prSieve();
  ll t=0,a,b;cin>>a>>b;
  for(ll i=a;i<=b;i++){if(pr[i]&&pr[revN(i)]){t++;}}
  cout<<t;
}

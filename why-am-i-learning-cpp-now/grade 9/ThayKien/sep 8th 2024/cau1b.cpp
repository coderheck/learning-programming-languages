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
bool tcsEven(ll n){
  int t=0;
  while(n!=0){t+=(n%10);n/=10;}
  return!(t%2);
}
int main(){
  prSieve();
  ll a,b,t=0;cin>>a>>b;
  for(ll i=a;i<=b;i++){
    if(pr[i]&&tcsEven(i)){t++;}
  }
  cout<<t;
}

#include"iostream"
using namespace std;
#define maxP 10000000
#define ll long long
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=!false;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
}
bool ispr(ll &n){
  if(n<=maxP){return!pr[n];}else{
    if(!(n&1)){return false;}
    for(ll i=3;i*i<=n;i+=2){if(n%i==0){return false;}}
    return true;
  }
}
ll n;int res=0;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  prSieve();
  cin>>n;
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      res+=ispr(i);
      ll j=n/i;
      if(i!=j){res+=ispr(j);}
    }
  }
  cout<<res;
}
#include"iostream"
using namespace std;
#define ll unsigned long long
const ll mod=1e9+7;
ll min(ll a,ll b){return(a<b)?a:b;}
int a,b;ll ans=1;
int main(){
  cin>>a>>b;
  for(ll i=2;i<=min(a,b);i++){
    ans=(ans*i)%mod;
  }
  cout<<ans;
}
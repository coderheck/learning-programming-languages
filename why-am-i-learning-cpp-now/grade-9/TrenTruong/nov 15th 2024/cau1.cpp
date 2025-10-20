#include"iostream"
using namespace std;
#define ll long long
const ll mod=1000000000;
ll n;
void check(){
  ll s=0;
  for(int i=1;i<=n;i++){
    s=(s+(i%mod*(i+1)%mod)%mod)%mod;
  }
  cout<<s<<"\n";
}
int main(){
  if(fopen("cau1.inp","r")){
    freopen("cau1.inp","r",stdin);
    // freopen("cau1.out","w",stdout);
  }
  cin>>n;
  check();
  ll ans=n;
  if(n%3==0){
    ans/=3;
    ans=(ans*(n+1))%mod;
    ans=(ans*(n+2))%mod;
  }else if((n+1)%3==0){
    ans=(ans*(n+1)/3)%mod;
    ans=(ans*(n+2))%mod;
  }else if((n+2)%3==0){
    ans=(ans*(n+2)/3)%mod;
    ans=(ans*(n+1))%mod;
  }
  cout<<ans;
}
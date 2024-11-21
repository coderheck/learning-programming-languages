#include"iostream"
#define ll long long
const ll mod=1000000007;
using namespace std;
ll a,n,res=1,expN;
int main(){
  cin>>a>>n;
  expN=a;
  for(ll i=1;i<=n;i++){
    res=(res+expN)%mod;
    expN=((expN%mod)*(a%mod))%mod;
  }
  cout<<res;
}

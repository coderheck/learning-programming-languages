#include"iostream"
#include"vector"
using namespace std;
#define ll long long
const ll mod = 20232024;
bool ispr(ll n){
  if(n<2){return false;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){return false;}
  }
  return true;
}
ll fastpowmod(ll a, unsigned ll b){
  long long res=1; a%=mod;
  if(a==0)return 0;
  while(b>0){
    if(b%2==1){res=(res*a)%mod;}
    b/=2; a=(a*a)%mod;
  }
  return res;
}
ll n;
vector<ll>prDivs;
void primeDivs(){
  for(ll i=2;i*i<=n;i++){
    if(n%i==0&&ispr(i)){prDivs.push_back(i);}
    if(n%i==0&&ispr(n/i)&&i!=n/i){prDivs.push_back(n/i);}
  }
}
ll res=1;
int main(){
  if(fopen("cau3.inp","r")){
    freopen("cau3.inp","r",stdin);
    freopen("cau3.out","w",stdout);
  }
  cin>>n;
  primeDivs();
  if(prDivs.size()==0){
    cout<<res;
  }else{
    for(ll i:prDivs){
      ll e=(fastpowmod(3,i)+i)%mod;
      res=(res*e)%mod;
    }
    cout<<res;
  }
}
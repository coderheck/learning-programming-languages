#include"iostream"
#include"iomanip"
using namespace std;
#define ll long long
ll n,x,tu,mau;
long double res;
int main(){
  if(fopen("cau1b.inp","r")){
    freopen("cau1b.inp","r",stdin);
    //freopen("cau1b.out","w",stdout);
  }
  cin>>n>>x;
  tu=x;mau=1;
  res=1+x;
  for(ll i=1;i<=n;i++){
    tu*=x*x;mau*=(2*i)*(2*i+1);
    res+=1.0*tu/mau;
  }
  cout<<fixed<<setprecision(3)<<res;
}
#include"iostream"
#include"iomanip"
using namespace std;
#define ld long double
#define ll long long
ll a,n,mau,tu;ld t=0;
int main(){
  cin>>a>>n;
  tu=a;mau=1;
  for(ll i=2;i<=n+1;i++){
    t+=1.0*tu/mau;
    tu*=a;mau*=i;
  }
  cout<<fixed<<setprecision(2)<<t;
}

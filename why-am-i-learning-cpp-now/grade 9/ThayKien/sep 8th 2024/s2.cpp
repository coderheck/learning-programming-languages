#include"iostream"
#include"iomanip"
using namespace std;
#define ld long double
#define ll long long
ll a,n,tu=1;ld t=0;
int main(){
  cin>>a>>n;
  for(ll i=1;i<=n;i++){
    tu*=a;
    t+=1.0*tu/i;
  }
  cout<<fixed<<setprecision(2)<<t;
}

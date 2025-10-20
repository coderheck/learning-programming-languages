#include"iostream"
#include"iomanip"
using namespace std;
#define ld long double
#define ll long long
ll a,b,n;ld t=0;
int main(){
  cin>>a>>b>>n;
  for(ll i=1;i<=n;i++){
    t+=1.0*a/(b+i);
  }
  cout<<fixed<<setprecision(2)<<t;
}

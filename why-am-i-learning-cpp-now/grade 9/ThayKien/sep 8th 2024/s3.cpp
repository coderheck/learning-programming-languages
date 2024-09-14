#include"iostream"
#include"iomanip"
#include"cmath"
using namespace std;
#define ld long double
#define ll long long
ll a,n;ld t=0;
int main(){
  cin>>a>>n;
  for(ll i=1;i<=n;i++){
    t+=1.0*i/(a+i);
  }
  cout<<fixed<<setprecision(2)<<t;
}

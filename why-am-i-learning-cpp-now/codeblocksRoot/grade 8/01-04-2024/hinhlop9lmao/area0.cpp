#include"iostream"
#include"iomanip"
#define ld long double
using namespace std;
int main(){
  if(fopen("area0.inp","r")){
    freopen("area0.inp","r",stdin);
    freopen("area0.out","w",stdout);
  }
  ld a,b;cin>>a>>b;
  cout<<fixed<<setprecision(2)<<(a*b)-( (a/2)*(a/2)*3.14 );
}

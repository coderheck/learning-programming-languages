#include"iostream"
#include"iomanip"
using namespace std;
#define ll long long
long double res=0,n;
int main(){
  if(fopen("bai1b.inp","r")){
    freopen("bai1b.inp","r",stdin);
    freopen("bai1b.out","w",stdout);
  }
  cin>>n;
  for(ll i=1;i<=n;i++){
    res+=1.0/(i*i);
  }
  cout<<fixed<<setprecision(4)<<res;
}
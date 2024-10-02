#include"iostream"
#include"iomanip"
using namespace std;
#define ll long long
ll n,x,tu,mau;
long double res=1;
ll factorial(ll n){
  if(n==1){return 1;}else{return n*factorial(n-1);}
}
int main(){
  if(fopen("cau1b.inp","r")){
    freopen("cau1b.inp","r",stdin);
    //freopen("cau1b.out","w",stdout);
  }
  cin>>n>>x;
  tu=x;mau=1;
  for(ll i=0;i<=n;i++){
    res+=1.0*tu/factorial(2*i+1);
    cout<<tu<<" "<<factorial(2*i+1)<<"\n";
    tu*=x*x;
  }
  cout<<fixed<<setprecision(4)<<res;
}

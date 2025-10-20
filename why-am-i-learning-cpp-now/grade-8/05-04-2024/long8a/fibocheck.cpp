#include"iostream"
#include"map"
#define ll long long
using namespace std;
map<ll,ll>fibo;
void fibbo(){
  ll f0=0,f1=1,f2=1;
  fibo[1]=1;fibo[2]=2;
  for(ll i=3;i<=1000;i++){
    f0=f1+f2;
    f1=f2;f2=f0;
    fibo[f2]=i;
  }
}
int main(){
  if(fopen("fibocheck.inp","r")){
    freopen("fibocheck.inp","r",stdin);
    freopen("fibocheck.out","w",stdout);
  }
  int t;cin>>t;fibbo();
  for(int i=1;i<=t;i++){
    ll n;cin>>n;
    if(fibo[n]!=0){cout<<fibo[n]<<"\n";}else{cout<<-1<<"\n";}
  }
}
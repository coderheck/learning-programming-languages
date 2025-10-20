#include"iostream"
#define ll long long
ll demuoc(ll n){
  ll d=0;
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      d++;
      ll j=n/i;
      if(j!=i){d++;}
    }
  }
  return d;
}
using namespace std;
int main(){
  if(fopen("demuoclevachan.inp","r")){
    freopen("demuoclevachan.inp","r",stdin);
  }
  int n,le=0,chan=0;cin>>n;
  for(int i=1;i<=n;i++){
    ll a;cin>>a;
    if(demuoc(a)%2==0){chan++;}else{le++;}
  }
  cout<<chan<<"\n"<<le;
}

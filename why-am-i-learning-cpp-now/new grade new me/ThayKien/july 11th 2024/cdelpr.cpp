#include"iostream"
using namespace std;
#define ll long long
bool nto(ll n){
  bool nt=true;
  if(n<=1){nt=false;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){nt=false;break;}
  }
  return nt;
}
int main(){
  ll tong=0,n,iter=0;cin>>n;ll s[n];
  for(ll i=1;i<=n;i++){
    ll a;cin>>a;
    if(!nto(a)){tong+=a;s[iter]=a;iter++;}
  }
  if(tong>0){
    cout<<tong<<"\n";
    for(ll i=0;i<iter;i++){cout<<s[i]<<" ";}
  }else{cout<<0<<"\nNONE";}
}
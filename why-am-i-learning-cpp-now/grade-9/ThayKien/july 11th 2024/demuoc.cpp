#include"iostream"
#include"math.h"
using namespace std;
#define ll long long
bool cp(ll n){
  ll sq=sqrt(n);
  return sq*sq==n;
}
int main(){
  int n,chan=0,le=0;cin>>n;
  for(int i=1;i<=n;i++){
    ll a;cin>>a;
    if(cp(a)){le++;}else{chan++;}
  }
  cout<<chan<<"\n"<<le;
}
#include"iostream"
using namespace std;
#define ll long long
long double revfact(ll n){
  ll ret=n,step=n-1;
  while(ret%step==0){ret/=step;step--;}
  return ret;
}
int main(){
  ll n;cin>>n;
  cout<<revfact(n);
}
#include"iostream"
#define ll long long
using namespace std;
ll daochuso(ll n){
  ll ret=0;
  while(n>0){ret=ret*10+(n%10);n/=10;}
  return ret;
}
void tohon(ll a, ll b){
  if(a>b){cout<<a;}else{cout<<b;}
}
int main(){
  ll a,b;cin>>a>>b;
  tohon(daochuso(a),daochuso(b));
}
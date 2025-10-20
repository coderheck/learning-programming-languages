#include"iostream"
#define ll long long
using namespace std;
ll daochuso(ll n){
  ll ret=0;
  while(n>0){ret=ret*10+(n%10);n/=10;}
  return ret;
}
int main(){
  ll n;cin>>n;
  if(daochuso(n)==n){cout<<"YES";}else{cout<<"NO";}
}
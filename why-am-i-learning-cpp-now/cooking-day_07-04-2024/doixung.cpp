#include"iostream"
#include"string"
#define ll long long
using namespace std;
ll rev(ll n){
  ll n1=n,ret=0;
  while(n1!=0){ret*=10;ret+=n1%10;n1/=10;}
  return ret;
}
int main(){
  ll n;cin>>n;
  if(rev(n)!=n){cout<<"NO";}else{cout<<"YES";}
}
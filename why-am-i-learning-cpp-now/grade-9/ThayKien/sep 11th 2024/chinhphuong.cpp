#include"iostream"
#include"cmath"
using namespace std;
#define ll long long
bool scp(ll n){
  return((int)sqrt(n)*(int)sqrt(n)==n);
}
ll tcs(ll n){
  ll ret=0;
  while(n!=0){ret+=(n%10);n/=10;}
  return ret;
}
int main(){
  ll n;cin>>n;
  scp(tcs(n))?cout<<"YES":cout<<"NO";
}
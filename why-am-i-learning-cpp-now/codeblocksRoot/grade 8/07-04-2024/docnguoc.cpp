#include"iostream"
#include"algorithm"
#define ll long long
using namespace std;
ll reverseDigits(ll n){
  ll n1=n,ret=0;
  while(n1!=0){ret*=10;ret+=n1%10;n1/=10;}
  return ret;
}
int main(){
  ll a,b;cin>>a>>b;
  cout<<max(reverseDigits(a),reverseDigits(b));
}

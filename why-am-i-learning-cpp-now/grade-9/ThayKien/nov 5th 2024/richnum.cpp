#include"iostream"
using namespace std;
#define ll long long
ll tu(ll n){
  ll r=1;
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){
      r+=i;
      if(i!=n/i){r+=n/i;}
    }
  }
  return r;
}
ll n;
int main(){
  cin>>n;
  cout<<(n<tu(n));
}
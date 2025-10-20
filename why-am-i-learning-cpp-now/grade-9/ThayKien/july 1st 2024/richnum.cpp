#include"iostream"
#define ll long long
using namespace std;
bool phongphu(ll n){
  ll t=0;
  for(ll i=1;i<=n/2;i++){if(n%i==0){t+=i;}}
  return(t>n);
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;cin>>n;cout<<phongphu(n);
}
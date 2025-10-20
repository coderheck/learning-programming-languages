#include"iostream"
using namespace std;
#define ll long long
ll a,b;
void revN(ll &n){
  ll r=0;
  while(n!=0){r=r*10+n%10;n/=10;}
  n=r;
}
int main(){
  cin>>a>>b;
  revN(a);revN(b);
  (a>b)?cout<<a:cout<<b;
}
#include"iostream"
using namespace std;
#define ll long long
ll buildRev(ll n){
  ll r=0;
  while(n!=0){r=r*10+n%10;n/=10;}
  return r;
}
ll x;
int main(){
  cin>>x;
  ll x1=buildRev(x);
  (x==x1)?cout<<1:cout<<-1;
  return 0;
}
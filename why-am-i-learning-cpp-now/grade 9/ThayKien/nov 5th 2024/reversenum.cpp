#include"iostream"
using namespace std;
#define ll long long
ll a,b;
void revnum(ll &n){
  ll r=0;
  while(n!=0){
    r=r*10+(n%10);
    n/=10;
  }
  n=r;
}
int main(){
  cin>>a>>b;
  revnum(a);revnum(b);
  if(a>b){cout<<a;}else{cout<<b;}
}
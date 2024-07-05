#include"iostream"
#define ll long long
using namespace std;
int main(){
  ll x,n,res=1;cin>>x>>n;
  while(n>0){
    if(n&1 /* ~ y%2==1 */){res*=x;}
    n>>=1; // ~ n/=2
    x*=x;
  }
  cout<<res;
}
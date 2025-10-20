#include"iostream"
#define ll long long
using namespace std;
ll tcs(ll n){
  ll t=0,n1=n;
  while(n1!=0){t+=n1%10;n1/=10;}
  return t;
}
int main(){
  ll n,res=-1;cin>>n;ll t=n-1;
  if(n>=100){t=100;}
  for(ll i=n-t;i<=n;i++){
    if(tcs(i)+i==n){res=i;break;}
  }
  cout<<res;
}
#include"iostream"
#define ll long long
using namespace std;
ll tcs(ll n){
  ll t=0,n1=n;
  while(n1!=0){t+=n1%10;n1/=10;}
  return t;
}
int main(){
  ll m,res=-1;cin>>m;
  if(m>=10){
    for(ll i=1;;i++){
      if(i+tcs(i)==m){res=i;break;}
    }
  }
  cout<<res;
}
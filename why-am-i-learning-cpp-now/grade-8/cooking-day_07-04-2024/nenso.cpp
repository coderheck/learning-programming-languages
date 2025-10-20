#include"iostream"
#define ll long long
using namespace std;
ll NenSo(ll n){
  ll t=0,n1=n;
  while(n1!=0){t+=n1%10;n1/=10;}
  if(t<10){return t;}else{return NenSo(t);}
}
int main(){
  ll n;cin>>n;
  cout<<NenSo(n);
}
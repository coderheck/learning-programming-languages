#include<iostream>
using namespace std;
#define ll long long
ll n;
void computeSquaredDigitSum(){
  ll r=0,n1=n,j;
  while(n1){j=n1%10;r+=j*j*j;n1/=10;}
  cout<<r<<" ";
}
void primesecond(){
  if(!(n&1)){cout<<0;return;}
  ll t=0,n1=n;
  while(n1){t+=n1%10;n1/=10;}
  if(!(t&1)){cout<<0;return;}
  for(ll i=3;i*i<=t;i+=2){
    if(!(t%i)){cout<<0;return;}
  }
  for(ll i=3;i*i<=n;i+=2){
    if(!(n%i)){cout<<0;return;}
  }
  cout<<1;
}
int main(){
  cin>>n;
  computeSquaredDigitSum();
  primesecond();
}

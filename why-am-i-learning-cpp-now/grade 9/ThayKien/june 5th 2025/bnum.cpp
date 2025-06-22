#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
ll tcs(ll n){
  ll r=0;
  while(n){r+=n%10;n/=10;}
  return r;
}
ll n,res=0;bool m[90];
int main(){
  m[1]=m[2]=m[3]=m[5]=m[8]=m[13]=m[21]=m[34]=m[55]=true;
  cin>>n;
  for(ll i=1;i*i<=n;i++){res+=m[tcs(i*i)];}
  cout<<res;
}

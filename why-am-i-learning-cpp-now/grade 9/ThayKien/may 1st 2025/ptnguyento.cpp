#include<iostream>
using namespace std;
#define ll long long
ll n;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  while(!(n&1)){n>>=1;cout<<2<<" ";}
  for(ll i=3;i*i<=n;i+=2){
    while(n%i==0){cout<<i<<" ";n/=i;}
  }
  if(n>1){cout<<n;}
}

#include<iostream>
using namespace std;
#define ll long long
ll tonguoc(const ll &n){
  ll r=1;
  if(!n){return 0;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){
      r+=i;
      ll j=n/i;
      if(i!=j){r+=j;}
    }
  }
  return r;
}
ll a,b,c,d;
int main(){
  cin>>a>>b;
  c=tonguoc(a);d=tonguoc(b);
  if(c==b&&d==a){cout<<"YES";}else{cout<<"NO";}
}

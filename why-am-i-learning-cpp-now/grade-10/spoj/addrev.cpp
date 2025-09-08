#include<iostream>
using namespace std;
#define ll long long 
ll revN(ll a){
  ll r=0;
  while(a!=0){r=r*10+a%10;a/=10;}
  return r;
}
ll n,a,b;
void parseArgs(){
  cout<<revN(revN(a)+revN(b))<<"\n";
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n;
  while(n--){
    cin>>a>>b;
    parseArgs();
  }
}

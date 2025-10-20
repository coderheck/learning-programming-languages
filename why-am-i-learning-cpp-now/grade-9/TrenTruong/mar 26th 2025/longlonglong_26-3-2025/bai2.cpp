#include<iostream>
#include<ios>
using namespace std;
#define ll long long
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll getSumD(ll n){
  ll ret=0;
  while(n!=0){ret+=n%10;n/=10;}
  return ret;
}
ll n;
int main(){
  cin>>n;
  while(n++){
    if(gcd(n,getSumD(n))>1){cout<<n;return 0;}
  }
}
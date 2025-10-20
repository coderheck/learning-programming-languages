#include<iostream>
using namespace std;
#define ll long long
ll n,res=0;
int main(){
  cin>>n;
  if(!(n&1)){
    res=1;
    while(!(n&1)){n>>=1;}
  }
  for(ll i=3;i*i<=n;i+=2){
    if(n%i==0){
      res++;
      while(n%i==0){n/=i;}
    }
  }
  cout<<res+(n>1);
}
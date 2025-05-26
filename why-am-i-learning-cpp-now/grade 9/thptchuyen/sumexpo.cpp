#include<iostream>
using namespace std;
#define ll long long
ll n,e=0,o=0,t=0;
int main(){
  cin>>n;
  while(!(n&1)){t++;n>>=1;}
  if(t&1){o+=t;}else{e+=t;}
  for(ll i=3;i*i<=n;i+=2){
    if(n%i==0){
      t=0;
      while(n%i==0){n/=i;t++;}
      if(t&1){o+=t;}else{e+=t;}
    }
  }
  if(n>1){o++;}
  cout<<e<<"\n"<<o;
}

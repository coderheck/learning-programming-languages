#include<iostream>
using namespace std;
#define ll long long
ll x,c=0;
int main(){
  cin>>x;
  if(!(x&1)){
    c=1;
    while(!(x&1)){x>>=1;}
  }
  for(ll i=3;i*i<=x;i++){
    if(!(x%i)){
      c++;
      while(!(x%i)){x/=i;}
    }
  }
  c+=(x>1);
  cout<<c;
}
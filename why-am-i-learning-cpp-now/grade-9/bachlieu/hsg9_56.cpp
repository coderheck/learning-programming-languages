#include<iostream>
using namespace std;
#define ll long long
ll n,c=0;
int main(){
  cin>>n;
  c+=!(n&1);
  while(!(n&1)){n>>=1;}
  for(ll i=3;i*i<=n;i+=2){
    if(n%i==0){
      c++;
      while(n%i==0){n/=i;}
    }
  }
  c+=(n>1);
  cout<<c;
}

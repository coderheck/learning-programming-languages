#include"iostream"
#include"algorithm"
#include"math.h"
#define ll long long
ll countDigits(ll a){
  ll t=0,n1=a;
  while(n1!=0){t+=n1%10;n1/=10;}
  return t;
}
using namespace std;
int main(){
  ll c=0;
  for(int i=10;i<=25;i++){
    if(countDigits(i)==5){c++;}
  }
  cout<<c;
}

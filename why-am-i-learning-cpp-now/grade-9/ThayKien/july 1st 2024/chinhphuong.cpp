#include"iostream"
#include"math.h"
using namespace std;
int tcs(int n){
  int t=0;
  while(n>0){t+=n%10;n/=10;}
  return t;
}
bool chinhphuong(int a){
  return (floor(sqrt(a))==sqrt(a) && ceil(sqrt(a))==sqrt(a));
}
int main(){
  int n;cin>>n;
  if(chinhphuong(tcs(n))){cout<<"YES";}else{cout<<"NO";}
}
#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
ll l,r,res=0;
int main(){
  cin>>l>>r;
  for(int i=sqrt(l);i*i<=r;i++){
    ll up=i*i;
    res+=(up>=l&&up<=r);
  }
  cout<<res;
}
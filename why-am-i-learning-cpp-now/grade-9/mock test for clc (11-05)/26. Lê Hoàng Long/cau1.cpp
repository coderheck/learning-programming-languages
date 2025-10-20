#include<iostream>
using namespace std;
#define ll long long
ll n,h,m,res=0;
int main(){
  cin>>n;
  if(n<3){cout<<0;return 0;}
  h=n/2;
  res+=(h-1)*h/2;
  m=n-1-h;
  res+=m*(m+1)/2;
  cout<<res;
}

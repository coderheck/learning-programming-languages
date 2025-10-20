#include<iostream>
using namespace std;
#define ll long long
ll a,b,c,res=1;
int main(){
  cin>>a>>b>>c;
  if(!(a%c)){cout<<0;return 0;}
  while(b){
    if(b&1){res=(res*a)%c;}
    a=(a*a)%c;b>>=1;
  }
  cout<<res;
}

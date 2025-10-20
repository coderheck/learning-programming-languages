#include<iostream>
using namespace std;
#define ll long long
void fastpowmod(ll a,ll b,ll c){
  ll res=1;a%=c;
  if(a==0){cout<<0;}
  while(b>0){
    if(b&1){res=(res*a)%c;}
    b>>=1;a=(a*a)%c;
  }
  cout<<res;
}
ll a,b,c;
int main(){
  cin>>a>>b>>c;
  fastpowmod(a,b,c);
}
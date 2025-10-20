#include"iostream"
#define ll long long
using namespace std;
ll tcs(ll n){
  ll t=0,n1=n;
  while(n1!=0){t+=n1%10;n1/=10;}
  return t;
}
ll sd(int k){
  ll cur=10,cnt=0;
  while(cnt<k){
    cur+=9;
    if(tcs(cur)==10){cnt++;}
  }
  return cur;
}
int main(){
  int k;cin>>k;cout<<sd(k);
  // cout<<sd(18000);
}

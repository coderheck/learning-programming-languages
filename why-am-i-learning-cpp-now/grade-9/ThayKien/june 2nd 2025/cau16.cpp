#include<iostream>
using namespace std;
#define ll long long
#define maxP 10000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
bool revn(ll n){
  ll r=0,n1=n;
  while(n1){r=r*10+n1%10;n1/=10;}
  return r==n;
}
ll l,r,res=0;
int main(){
  prSieve();
  cin>>l>>r;
  for(ll i=l;i<=r;i++){res+=(!pr[i]&&revn(i));}
  cout<<res;
}

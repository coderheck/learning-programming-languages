#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
#define maxP 1000000
ll n,a;bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
int main(){
  prSieve();
  cin>>n;
  while(n--){
    cin>>a;
    ll sq=sqrt(a);
    if(sq*sq==a&&!pr[sq]){cout<<"YES\n";}else{cout<<"NO\n";}
  }
}
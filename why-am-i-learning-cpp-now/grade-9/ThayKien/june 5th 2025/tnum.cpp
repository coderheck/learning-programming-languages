#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
#define maxP 1000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
ll n,a,sq,res=0;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  prSieve();
  cin>>n;
  while(n--){
    cin>>a;
    sq=sqrt(a);
    if(!pr[sq]&&sq*sq==a){cout<<"YES\n";}else{cout<<"NO\n";}
  }
}

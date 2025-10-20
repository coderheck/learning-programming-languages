#include<iostream>
using namespace std;
#define ll long long
#define maxP 1000000
ll n;bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
int main(){
  if(fopen("comp.inp","r")){
    freopen("comp.inp","r",stdin);
    freopen("comp.out","w",stdout);
  }
  prSieve();
  cin>>n;
  for(ll i=1;i<=n/2;i++){
    if(pr[i]&&pr[n-i]){cout<<i<<" "<<n-i;return 0;}
  }
}
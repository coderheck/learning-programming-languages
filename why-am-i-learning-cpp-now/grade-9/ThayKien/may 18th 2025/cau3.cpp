#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
#define ll long long
ll maxP;bool pr[20000005];
void prSieve(){
  for(ll i=3;i*i<=maxP;i+=2){
    if(!pr[i]){
      for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
bool isPr(const ll &n){
  if(n<2){return false;}
  if(n==2){return true;}
  if(!(n&1)){return false;}
  if(n<=maxP){
    return !pr[n];
  }else{
    for(ll i=3;i*i<=n;i+=2){
      if(n%i==0){return false;}
    }
    return true;
  }
}
ll a,b,k,res=0;
int main(){
//  freopen("cau3.inp","r",stdin);
  cin>>a>>b>>k;
  if(k==2){
    maxP=20000000;
    prSieve();
    for(ll i=a;i<=b;i++){res+=isPr(i);}
  }else if(k==3){
    maxP=10000000;
    prSieve();
    for(ll i=sqrt(a);i*i<=b;i++){
      ll j=i*i;
      res+=(j>=a&&j<=b&&isPr(i));
    }
  }else if(k!=9){
    vector<ll>d(1000005,0);
    for(ll i=1;i*i<=1000000;i++){
      for(ll j=i;j<=1000000;j+=i){d[j]++;}
    }
    for(ll i=a;i<=b;i++){res+=(d[i]==k);}
  }
  cout<<res;
}

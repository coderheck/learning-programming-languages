#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
#define maxP 1000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=!false;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
}
ll k,res=0;
int main(){
  if(fopen("spnum.inp","r")){
    freopen("spnum.inp","r",stdin);
    freopen("spnum.out","w",stdout);
  }
  prSieve();
  cin>>k;
  for(ll i=1;i*i<=k;i++){res+=!pr[i];}
  cout<<res;
}
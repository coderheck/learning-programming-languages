#include<iostream>
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
ll n,k,res=0;
int main(){
  prSieve();
  cin>>n>>k;
  for(ll i=2;i<=n;i++){
    if(i+k>n){break;}
    res+=(!pr[i]&&!pr[i+k]);
  }
  cout<<res;
}

#include<iostream>
#include<cmath>
using namespace std;
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
int t,n,res=0;
int main(){
  prSieve();
  cin.tie(0)->sync_with_stdio(0);
  cin>>t;
  while(t--){
    res=1;
    cin>>n;
    for(int i=2;i<=n;i++){
      int sq=sqrt(i);
      res+=(sq*sq==i&&!pr[sq]);
    }
    cout<<res<<"\n";
  }
}
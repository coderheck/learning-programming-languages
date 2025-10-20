#include<iostream>
#include<cmath>
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
ll m,n,res=0;
int main(){
  prSieve();
  cin>>m>>n;
  for(ll i=sqrt(m);i*i<=n;i++){res+=(!pr[i]&&i*i>=m&&i*i<=n);}
  cout<<res;
}

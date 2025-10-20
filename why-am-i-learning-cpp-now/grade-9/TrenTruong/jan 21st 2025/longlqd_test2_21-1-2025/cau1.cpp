#include"iostream"
using namespace std;
#define ll long long
#define maxP 10000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=!false;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
}
bool ispr(ll n){
  if(n>maxP){
    if(n%2==0){return false;}
    for(ll i=3;i*i<=n;i+=2){
      if(n%i==0){return false;}
    }
    return true;
  }else{return(!pr[n]);}
}
ll n;int res=0;
int main(){
  prSieve();
  cin>>n;
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      res+=!ispr(i);
      ll j=n/i;
      if(i!=j){
        res+=!ispr(j);
      }
    }
  }
  cout<<res;
}
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
bool ispr(const ll &n){
  if(n<=maxP){
    return !pr[n];
  }else{
    if(n<2){return false;}
    if(n==2||n==3){return true;}
    if(!(n&1)){return false;}
    for(ll i=3;i*i<=n;i+=2){
      if(n%i==0){return false;}
    }
    return true;
  }
}
ll n,c=0,l=0;
int main(){
  prSieve();
  cin>>n;
  for(ll i=2;i*i<=n;i++){
    if(ispr(i)){
      for(ll j=i+1;j*j<=n;j++){
        if(ispr(j)){
          l=i*i+j*j;
          if(l>n){break;}
          if(ispr(l)){
            cout<<i<<" "<<j<<" "<<l<<"\n";c++;
          }
        }
      }
    }
  }
  if(!c){cout<<-1;}
}

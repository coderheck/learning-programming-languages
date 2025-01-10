#include"iostream"
using namespace std;
#define ll long long
#define maxP 10000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
bool naivePrimeCheck(ll n){
  if(n<2){return false;}
  if(n==2||n==3){return true;}
  if(n%2==0||n%3==0){return false;}
  for(ll i=5;i*i<=n;i+=6){
    if(n%i==0||n%(i+2)==0){return false;}
  }
  return true;
}
void proc(ll n){
  while(n!=0){
    if(n>maxP){
      if(naivePrimeCheck(n)){cout<<"0\n";return;}
    }else{
      if(!pr[n]){cout<<"0\n";return;}
    }
    n/=10;
  }
  cout<<"1\n";
}
ll a[3];
int main(){
  prSieve();
  for(int i=0;i<3;i++){cin>>a[i];}
  for(int i=0;i<3;i++){proc(a[i]);}
}
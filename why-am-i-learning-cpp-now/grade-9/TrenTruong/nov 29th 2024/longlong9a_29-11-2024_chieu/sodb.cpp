#include"iostream"
using namespace std;
#define maxPrime 10000000
#define ll long long
bool pr[maxPrime+1];
void prSieve(){
  for(int i=2;i<=maxPrime;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxPrime;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxPrime;j+=i){pr[j]=false;}
    }
  }
}
bool isPrime(ll n){
  if(n%2==0){return false;}
  for(ll i=3;i*i<=n;i+=2){
    if(n%i==0){return false;}
  }
  return true;
}
bool oddandeven(ll n){
  int oddc=0,evenc=0;
  while(n!=0){
    int d=n%10;
    if(d%2==0){evenc++;}else{oddc++;}
    n/=10;
  }
  return(evenc!=oddc);
}
int n,res=0;ll a[2000005];
int main(){
  prSieve();
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){
    if(a[i]<=10000000){
      res+=(pr[a[i]]&&oddandeven(a[i]));
    }else{
      res+=(isPrime(a[i])&&oddandeven(a[i]));
    }
  }
  cout<<res;
}
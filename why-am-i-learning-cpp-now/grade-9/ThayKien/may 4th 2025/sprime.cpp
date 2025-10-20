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
bool sprime(const ll &x){
  ll n=x;
  while(n!=0){
    if(pr[n]){return false;}
    n/=10;
  }
  cout<<x<<"\n";
  return true;
}
ll a,b,r=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  prSieve();
  cin>>a>>b;
  for(ll i=a;i<=b;i++){r+=sprime(i);}
  if(!r){cout<<"NO";}
}

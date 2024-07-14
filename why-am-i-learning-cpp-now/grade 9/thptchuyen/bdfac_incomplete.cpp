#include"iostream"
#include"vector"
using namespace std;
#define ll long long
vector<ll>factors;
int main(){
  ll n;cin>>n;
  factors[0]=factors[1]=factors[2]=0;
  while(n%2==0){factors[2]++;}
  cout<<factors[2];
  for(ll i=3;i*i<=n;i+=2){
    factors[i]=0;
    while(n%i==0){factors[i]++;}
  }
  for(ll i=2;i*i<=n;i+=2){if(factors[i]>0){cout<<factors[i];}}
}
#include"iostream"
#include"climits"
using namespace std;
#define ll long long
int main(){
  ll n,maxP=LLONG_MIN;cin>>n;ll a[n];
  for(ll i=0;i<n;i++){cin>>a[i];}
  for(ll i=0;i<n;i++){
    for(ll j=i;j<n;j++){
      if(i<j&&a[i]*a[j]>maxP){maxP=a[i]*a[j];}
    }
  }
  cout<<maxP;
}
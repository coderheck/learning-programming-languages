#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
ll n,a[1005],res=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  for(ll i=0;i<n;i++){cin>>a[i];}
  for(ll i=0;i<n;i++){
    for(ll j=i+1;j<n;j++){
      res+=binary_search(a+j+1,a+n,a[i]*a[i]+a[j]*a[j]);
    }
  }
  cout<<res;
}

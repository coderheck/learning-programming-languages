#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define maxA 300000
ll n;vector<ll>d(300005,0);
int main(){
  for(ll i=1;i<=maxA;i++){
    for(ll j=i;j<=maxA;j+=i){d[j]+=i;}
  }
  cin>>n;
  for(ll i=1;i<=n/2;i++){
    
  }
}

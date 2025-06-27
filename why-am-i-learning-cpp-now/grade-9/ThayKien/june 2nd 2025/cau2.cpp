#include<iostream>
#include<vector>
using namespace std;
#define ll long long
vector<ll>d(1000005,0);ll a,maxDs=0,res=0;
int main(){
  for(ll i=1;i<=1000000;i++){
    for(ll j=i;j<=1000000;j+=i){d[j]++;}
  }
  cin>>a;
  for(ll i=1;i<a;i++){
    if(maxDs<d[i]-1){maxDs=d[i]-1;res=i;}
  }
  cout<<res;
}

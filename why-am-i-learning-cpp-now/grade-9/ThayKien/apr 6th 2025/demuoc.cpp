#include<iostream>
#include<vector>
using namespace std;
#define ll long long
ll n,maxdiv=1,res=1;
int main(){
  cin>>n;
  vector<ll>divc(1000005,0);
  for(ll i=1;i<=n;i++){
    for(ll j=i;j<n;j+=i){
      divc[j]++;
      if(divc[j]>maxdiv){maxdiv=divc[j];res=j;}
    }
  }
  cout<<res;
}
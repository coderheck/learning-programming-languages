#include<iostream>
using namespace std;
#define ll long long
ll n,s=0,j;
int main(){
  if(fopen("uoc.inp","r")){
    freopen("uoc.inp","r",stdin);
    freopen("uoc.out","w",stdout);
  }
  cin>>n;
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      s+=i;j=n/i;
      if(i!=j){s+=j;}
    }
  }
  cout<<s;
}
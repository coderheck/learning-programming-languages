#include<iostream>
using namespace std;
#define ll long long
ll t,n,res;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  if(fopen("largestfactor.inp","r")){
    freopen("largestfactor.inp","r",stdin);
    freopen("largestfactor.out","w",stdout);
  }
  cin>>t;
  while(t--){
    cin>>n;
    res=1;
    if(!(n&1)){
      res=2;
      while(!(n&1)){n>>=1;}
    }
    for(ll i=3;i*i<=n;i+=2){
      if(n%i==0){
        res=i;
        while(n%i==0){n/=i;}
      }
    }
    if(n>1){res=n;}
    cout<<res<<"\n";
  }
}
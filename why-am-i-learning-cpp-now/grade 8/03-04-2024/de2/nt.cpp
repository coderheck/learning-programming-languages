#include"bits/stdc++.h"
#define ll long long
#define kien main
#define kbc ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
bool nto(ll n){
  bool nt=true;
  if(n<=1){nt=false;}
  for(ll i=2;i*i<=n;i++){if(n%i==0){nt=false;}}
  return nt;
}
int kien(){
  kbc;
  if(fopen("nt.inp","r")){
    freopen("nt.inp","r",stdin);
    freopen("nt.out","w",stdout);
  }
  ll a,b,d=0;cin>>a>>b;
  for(ll i=a;i<=b;i++){
    if(nto(i)==true){d++;}
  }
  cout<<d;
}

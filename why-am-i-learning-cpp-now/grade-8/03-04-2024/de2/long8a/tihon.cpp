#include"bits/stdc++.h"
#define ll long long
#define kien main
#define kbc ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
bool checkTiHon(ll n){
  ll tongUocReal=0;
  for(ll i=1;i<=n/2;i++){
    if(n%i==0){tongUocReal+=i;}
  }
  if(tongUocReal>n){return true;}else{return false;}
}
int kien(){
  kbc;
  if(fopen("tihon.inp","r")){
    freopen("tihon.inp","r",stdin);
    freopen("tihon.out","w",stdout);
  }
  int n,d=0;cin>>n;
  for(int i=1;i<=n;i++){
    ll cur;cin>>cur;
    if(checkTiHon(cur)==true){d++;}
  }
  cout<<d;
}

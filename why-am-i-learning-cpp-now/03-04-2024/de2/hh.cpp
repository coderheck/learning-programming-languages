#include"bits/stdc++.h"
#define ll long long
#define ull unsigned long long
#define kien main
#define kbc ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
bool check(ll n){
  ll t=0,n1=n;
  while(n1!=0){t+=n1%10;n1/=10;}
  if(t==10){return true;}else{return false;}
}
int kien(){
  kbc;
  if(fopen("hh.inp","r")){
    freopen("hh.inp","r",stdin);
    freopen("hh.out","w",stdout);
  }
  ll k,dem=0;cin>>k;ll a[k];
  for(ll i=1;;i++){
    if(check(i)==true){
      dem++;
      a[dem]=i;
      if(k==dem){cout<<a[k];break;}
    }
  }
}

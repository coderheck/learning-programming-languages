#include"bits/stdc++.h"
#define ll long long
#define kien main
#define kbc ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int kien(){
  kbc;
  if(fopen("bai3.inp","r")){
    freopen("bai3.inp","r",stdin);
    freopen("bai3.out","w",stdout);
  }
  ll n,b,d=0,t=0;cin>>n>>b;ll a[n];
  for(ll i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  ll i=n-1;
  while(t<b){t+=a[i];d++;;i--;}
  cout<<d;
}

#include"bits/stdc++.h"
#define ll long long
#define kien main
#define kbc ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int ASCIItoInt(char c){
  return (int)c-'0';
}
long double TrongSoMang(vector<ll>arr,ll count){
  long double t=0;
  for(ll i=0;i<count;i++){t+=arr[i];}
  return t/count;
}
int kien(){
  kbc;
  if(fopen("trongso.inp","r")){
    freopen("trongso.inp","r",stdin);
    freopen("trongso.out","w",stdout);
  }
  int n,maxtrongso=0;cin>>n;string maxS;
  for(int i=1;i<=n;i++){
    vector<ll>digits(100000);ll iter=0;string s;cin>>s;
    for(int i=0;i<s.size();i++){
      if(s[i]>='0' && s[i]<='9'){digits[iter]=ASCIItoInt(s[i]);iter++;}
    }
    long double tsm=TrongSoMang(digits,iter);
    if(tsm>maxtrongso){maxtrongso=tsm;maxS=s;}
  }
  cout<<maxS;
}

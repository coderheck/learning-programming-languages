#include"bits/stdc++.h"
#define kien main
#define ull unsigned long long
using namespace std;
ull tcs(ull n){
  ull t=0;
  while(n>0){t+=n%10;n/=10;}
  return t;
}
bool nto(ull n){
  bool nt=true;
  if(n<=1){nt=false;}
  for(ull i=2;i*i<=n;i++){
    if(n%i==0){nt=false;}
  }
  return nt;
}
int kien(){
  if(fopen("cau2.inp","r")){
    freopen("cau2.inp","r",stdin);
    freopen("cau2.out","w",stdout);
  }
  ull l,r,d=0;cin>>l>>r;
  for(ull i=l;i<=r;i++){
    if(tcs(i)%5==0){if(nto(i)==true){d++;}}
  }
  cout<<d;
}

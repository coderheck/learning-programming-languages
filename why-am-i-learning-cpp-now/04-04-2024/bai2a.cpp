#include"bits/stdc++.h"
#define ll long long
#define kien main
#define kbc ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
long long demuoc(long long n){
  long long d=0;
  for(long long i=1;i*i<=n;i++){
    if(n%i==0){
      d++;
      long long j=n/i;
      if(j!=i){d++;}
    }
  }
  return d;
}
int kien(){
  kbc;
  if(fopen("bai2a.inp","r")){
    freopen("bai2a.inp","r",stdin);
    freopen("bai2a.out","w",stdout);
  }
  int n;cin>>n;
  for(ll m=n+1;m<=LLONG_MAX-1;m++){
    if(demuoc(m)==3){cout<<m;break;}
  }
}

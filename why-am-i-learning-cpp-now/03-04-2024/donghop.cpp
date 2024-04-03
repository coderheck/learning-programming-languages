#include"bits/stdc++.h"
#define ll long long
#define kien main
#define kbc ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int kien(){
  kbc;
  if(fopen("donghop.inp","r")){
    freopen("donghop.inp","r",stdin);
    freopen("donghop.out","w",stdout);
  }
  int n,k;ll t=0;cin>>n>>k;
  for(int i=1;i<=n;i++){int a;cin>>a;t+=a;}
  cout<<t/k*1.0;
}

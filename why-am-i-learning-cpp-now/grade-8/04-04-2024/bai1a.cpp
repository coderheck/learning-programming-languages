#include"bits/stdc++.h"
#define ll long long
#define kien main
#define kbc ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int kien(){
  kbc;
  if(fopen("bai1a.inp","r")){
    freopen("bai1a.inp","r",stdin);
    freopen("bai1a.out","w",stdout);
  }
  int n;cin>>n;
  for(int i=5;i<=n;i+=10){if(i%3==0 && i%10==5){cout<<i<<" ";}}
}

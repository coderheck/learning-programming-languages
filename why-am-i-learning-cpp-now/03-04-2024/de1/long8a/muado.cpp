#include"bits/stdc++.h"
#define ll long long
#define kien main
#define kbc ios_base::sync_with_stdio(false);cin.tie(nullptr)
using namespace std;
int kien(){
  kbc;
  if(fopen("muado.inp","r")){
    freopen("muado.inp","r",stdin);
    freopen("muado.out","w",stdout);
  }
  int n;ll c,maxT=0;cin>>n>>c;ll a[n];
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      ll tmp=a[i]+a[j];
      if(tmp>maxT && tmp<c){maxT=(a[i]+a[j]);}
    }
  }
  cout<<maxT;
}

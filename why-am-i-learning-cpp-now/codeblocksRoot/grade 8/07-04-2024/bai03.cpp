#include"bits/stdc++.h"
#define ll long long
#define kien main
#define kbc ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int kien(){
  kbc;
  if(fopen("bai03.inp","r")){
    freopen("bai03.inp","r",stdin);
    freopen("bai03.out","w",stdout);
  }
  int n,m,d=0;cin>>n>>m;int a[n],b[m];
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<m;i++){cin>>b[i];}
  for(int i=0;i<m;i++){
    bool f=false;
    for(int j=0;j<m;j++){if(b[i]==a[j]){f=true;break;}}
    if(!f){d++;}
  }
  cout<<d;
}

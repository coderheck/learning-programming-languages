#include"bits/stdc++.h"
#define ll long long
#define kien main
#define kbc ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int kien(){
  kbc;
  if(fopen("sum.inp","r")){
    freopen("sum.inp","r",stdin);
    freopen("sum.out","w",stdout);
  }
  int trol[5],maxT=0,minT=0;
  for(int i=0;i<5;i++){cin>>trol[i];}
  sort(trol,trol+5);
  for(int i=0;i<4;i++){minT+=trol[i];}
  for(int i=1;i<5;i++){maxT+=trol[i];}
  cout<<minT<<" "<<maxT;
}

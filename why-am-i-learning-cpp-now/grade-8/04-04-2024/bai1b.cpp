#include"bits/stdc++.h"
typedef long long ll;
using namespace std;
int main(){
  if(fopen("bai1b.inp","r")){
    freopen("bai1b.inp","r",stdin);
    freopen("bai1b.out","w",stdout);
  }
  ll m,n,TongN=0,base=1;cin>>m>>n;
  for(int i=1;i<=n;i++){TongN+=base;base*=2;}
  if(m>=TongN){cout<<1;}else{cout<<2;}
}
#include"bits/stdc++.h"
#define ll long long
#define kien main
using namespace std;
int kien(){
  if(fopen("tongchan.inp","r")){
    freopen("tongchan.inp","r",stdin);
    freopen("tongchan.out","w",stdout);
  }
  int n;ll t=0;cin>>n;
  for(int i=1;i<=n;i++){
    int tmp;cin>>tmp;if(tmp%2==0){t+=tmp;}
  }
  cout<<t;
}

#include"bits/stdc++.h"
using namespace std;
#define ll long long
#define kien main
#define kbc ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int kien(){
  kbc;
  if(fopen("donghop.inp","r")){
    freopen("donghop.inp","r",stdin);
    //freopen("donghop.out","w",stdout);
  }
  int n,k;ll t=0,s=0;cin>>n>>k;ll a[n];
  for(int i=1;i<=n;i++){cin>>a[i];}
  for(int i=1;i<=n;i++){
    s+=a[i];
  }
  ll lol=s%k;
  ll m=s/k+lol;
  cout<<t/k*1.0;
}

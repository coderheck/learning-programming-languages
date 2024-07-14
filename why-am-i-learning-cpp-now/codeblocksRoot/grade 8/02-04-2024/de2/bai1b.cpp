#include"bits/stdc++.h"
using namespace std;
int main(){
  if(fopen("bai1b.inp","r")){
    freopen("bai1b.inp","r",stdin);
    freopen("bai1b.out","w",stdout);
  }
  long double n,kid=0;cin>>n;
  for(long double i=1;i<=n;i++){
    kid+=1/(i*i);
  }
  cout<<fixed<<setprecision(4)<<kid;
}

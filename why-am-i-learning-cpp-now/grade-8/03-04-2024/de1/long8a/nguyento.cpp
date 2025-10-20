#include"bits/stdc++.h"
#define ll long long
#define kien main
using namespace std;
bool nto(int n){
  bool nt=true;
  if(n<=1){nt=false;}
  for(int i=2;i*i<=n;i++){if(n%i==0){nt=false;}}
  return nt;
}
int kien(){
  if(fopen("nguyento.inp","r")){
    freopen("nguyento.inp","r",stdin);
    freopen("nguyento.out","w",stdout);
  }
  int n;cin>>n;if(nto(n)==true){cout<<"YES";}else{cout<<"NO";}
}

#include"iostream"
#define kbc main
using namespace std;
int tonguoc(int n){
  int t=0;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      t+=i;
      int j=n/i;
      if(j!=i){t+=j;}
    }
  }
  return t;
}
int kbc(){
  if(fopen("cau01.inp","r")){
    freopen("cau01.inp","r",stdin);
    freopen("cau01.out","w",stdout);
  }
  int n,d=0;cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
      if(tonguoc(i)==j || tonguoc(j)==i){d++;}
    }
  }
  cout<<d;
}

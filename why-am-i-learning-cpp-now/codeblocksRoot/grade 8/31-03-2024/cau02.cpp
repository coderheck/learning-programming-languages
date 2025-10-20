#include"iostream"
#define kbc main
#define ll long long
using namespace std;
bool nto(ll n){
  bool nt=true;
  if(n<=1){nt=false;}
  for(int i=2;i*i<=n;i++){
    if(n%i==0){nt=false;break;}
  }
  return nt;
}
int kbc(){
  if(fopen("cau02.inp","r")){
    freopen("cau02.inp","r",stdin);
    freopen("cau02.out","w",stdout);
  }
  int a,b,d=0;cin>>a>>b;
  for(int i=a;i<=b;i++){
    if(nto(i)==true){d++;}
  }
  cout<<d;
}

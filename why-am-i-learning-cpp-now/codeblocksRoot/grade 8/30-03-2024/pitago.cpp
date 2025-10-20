#include"iostream"
#include"algorithm"
#define kbc main
#define ull unsigned long long
using namespace std;
bool checkPythagore(ull a,ull b,ull c){
  if( (a*a)+(b*b)==c*c ){return true;}else{return false;}
}
int kbc(){
  if(fopen("pitago.inp","r")){
    freopen("pitago.inp","r",stdin);
    freopen("pitago.out","w",stdout);
  }
  ull n,d=0;cin>>n;ull a[n];
  for(ull i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  for(ull i=0;i<n;i++){
    for(ull j=i+1;j<n;j++){
      for(ull k=j+1;k<n;k++){
        if(checkPythagore(a[i],a[j],a[k])==true){d++;}
      }
    }
  }
  cout<<d;
}

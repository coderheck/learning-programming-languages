#include"iostream"
#include"math.h"
#define ull unsigned long long
using namespace std;
bool scp(ull n){
  if(floor(sqrt(n))==ceil(sqrt(n))){return true;}else{return false;}
}
int main(){
  if(fopen("cpl.inp","r")){
    freopen("cpl.inp","r",stdin);
    freopen("cpl.out","w",stdout);
  }
  ull n,t=0,d=0;cin>>n;
  for(ull i=1;i<=n;i++){
    if(scp(i)==true){if(i%2!=0){d++;t+=i;}}
  }
  cout<<d<<"\n"<<t;
}

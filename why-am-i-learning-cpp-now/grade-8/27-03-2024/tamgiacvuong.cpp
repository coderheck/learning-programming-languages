#include"iostream"
#include"stdio.h"
using namespace std;
int main(){
  if(fopen("tamgiac.inp","r")){
    freopen("tamgiac.inp","r",stdin);
    freopen("tamgiac.out","w",stdout);
  }
  int n,tgv=0,d=0;cin>>n;int e[n];
  for(int i=1;i<=n;i++){
    int a,b,c;cin>>a>>b>>c;
    if( (a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (c*c)+(b*b)==(a*a) ){tgv++;e[d]=i;d++;}
  }
  cout<<tgv<<"\n";
  for(int i=0;i<d;i++){cout<<e[i]<<"\n";}
}
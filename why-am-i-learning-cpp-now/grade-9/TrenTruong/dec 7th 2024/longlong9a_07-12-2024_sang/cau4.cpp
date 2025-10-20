#include"iostream"
#include"cmath"
#include"climits"
#include"algorithm"
using namespace std;
#define maxN 1000000
int n,x,y,a[maxN+5],j,sd,sa,mindiff=INT_MAX,u,v;
bool cmpfn(const int a,const int b){
  return(abs(a)<abs(b));
}
int main(){
  cin>>n>>x>>y;
  for(int i=1;i<=n;i++){cin>>a[i];}
  sort(a+1,a+n+1,cmpfn);
  a[n+1]=sa=sd=j=0;
  for(int i=1;i<=n;i++){
    while(j<=n&&(sa<y||sd<x)){
      j++;
      if(a[j]>0){sd++;}else{sa++;}
    }
    if(j>n){break;}
    if(mindiff>abs(a[j])-abs(a[i])){
      mindiff=abs(a[j])-abs(a[i]);
      u=abs(a[i]);v=abs(a[j]);
    }
    if(a[i]>0){sd--;}else{sa--;}
  }
  if(mindiff==INT_MAX){cout<<-1;}else{cout<<u<<" "<<v;}
}
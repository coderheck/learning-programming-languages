#include"iostream"
using namespace std;
#define elif else if
int max(int a,int b){return(a>b)?a:b;}
int n,a[105],res=0;
bool check(int d){
  for(int i=1;i+d<=n;i++){
    if(a[i]!=a[i+d]){return false;}
  }
  return true;
}
int main(){
  cin>>n;
  for(int i=1;i<=n;i++){cin>>a[i];}
  for(int d=1;d<=n/2;d++){
    if(check(d)){res=max(res,d);}
  }
  cout<<res;
}
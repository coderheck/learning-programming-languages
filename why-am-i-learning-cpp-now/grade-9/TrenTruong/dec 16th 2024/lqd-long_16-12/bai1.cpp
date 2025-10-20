#include"iostream"
using namespace std;
int max(int a,int b){return(a>b)?a:b;}
int n,a,b,res=0;
int main(){
  cin>>n>>a>>b;
  for(int i=0;i<=n/a;i++){
    int r=n-i*a;
    int chim=r/b;
    res=max(res,i*a+chim*b);
  }
  cout<<res;
}
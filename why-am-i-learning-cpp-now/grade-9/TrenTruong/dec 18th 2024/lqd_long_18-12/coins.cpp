#include"iostream"
#include"algorithm"
using namespace std;
struct bird{int a,b;}a[100005];
bool cmpfn(const bird &a,const bird &b){
  if(a.b==b.b){
    return(a.a>b.a);
  }else{
    return(a.b<b.b);
  }
}
int n,m,res=0,c=0;
int main(){
  cin>>n>>m;
  for(int i=0;i<n;i++){cin>>a[i].a;}
  for(int i=0;i<n;i++){cin>>a[i].b;}
  sort(a,a+n,cmpfn);
  while(m+a[c].a>=a[c].b&&c<=n){
    m+=a[c++].a;
  }       
  cout<<m;
}
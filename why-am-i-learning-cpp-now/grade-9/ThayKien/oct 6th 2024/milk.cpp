#include"iostream"
#include"algorithm"
using namespace std;
#define maxN 1000000
#define cst const
int n,m,res;
struct provider{
  int p;int a;
}a[maxN];
bool cmpfn(cst provider &a,cst provider &b){
  return a.p<b.p;
}
int main(){
  if(fopen("milk.inp","r")){
    freopen("milk.inp","r",stdin);
  }
  cin>>n>>m;
  for(int i=0;i<m;i++){cin>>a[i].p>>a[i].a;}
  sort(a,a+n,cmpfn);
  for(int i=0;i<m;i++){cout<<a[i].p<<" "<<a[i].a<<"\n";}
}
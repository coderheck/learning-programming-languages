#include"iostream"
#include"algorithm"
using namespace std;
int n,m;
struct crow{int a,b;}lol[100005];
bool cmpfn(const crow &a,const crow &b){
  if(a.b==b.b){
    return(a.a>b.a);
  }else{
    return(a.b<b.b);
  }
}
int main(){
  cin>>n>>m;
  for(int i=0;i<n;i++){cin>>lol[i].a;}
  for(int i=0;i<n;i++){cin>>lol[i].b;}
  sort(lol,lol+n,cmpfn);
  for(int i=0;i<n;i++){
    int old=lol[i].a;lol[i].a+=m;
    if(lol[i].a>=lol[i].b){
      m+=old;
    }else{cout<<m;exit(0);}
  }
  cout<<m;
}
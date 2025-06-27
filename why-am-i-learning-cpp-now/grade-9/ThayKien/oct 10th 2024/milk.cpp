#include"iostream"
#include"algorithm"
using namespace std;
#define maxN 2000001
int n,m,got=0,curPrice=0,it=0;
struct mp{
  int p;int a;
}milks[maxN];
bool cmpfn(const mp &A,const mp &B){
  return A.p<B.p;
}
int main(){
  // if(fopen("milk.inp","r")){
  //   freopen("milk.inp","r",stdin);
  // }
  cin>>n>>m;
  for(int i=0;i<m;i++){cin>>milks[i].p>>milks[i].a;}
  sort(milks,milks+m,cmpfn);
  while(got<n){
    got+=milks[it].a;
    curPrice+=milks[it].p*milks[it].a;
    it++;
  }
  if(got>n){
    cout<<curPrice-(milks[it-1].p*(got-n));
  }else{cout<<curPrice;}
}
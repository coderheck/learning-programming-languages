#include"iostream"
#include"algorithm"
using namespace std;
struct ball{int w,c;}a[1000005];
bool cmpfn(const ball &a,const ball &b){
  if(a.c==b.c){return(a.w<b.w);}else{return(a.c<b.c);}
}
int n,m,res=1,tw=0;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n>>m;
  for(int i=0;i<n;i++){cin>>a[i].w;}
  for(int i=0;i<n;i++){cin>>a[i].c;}
  sort(a,a+n,cmpfn);
  // for(int i=0;i<n;i++){cout<<a[i].w<<" ";}
  // cout<<"\n";
  // for(int i=0;i<n;i++){cout<<a[i].c<<" ";}
  // cout<<"\n";
  tw+=a[0].w;
  for(int i=1;i<n;i++){
    if(a[i].c==a[i-1].c){
      tw+=a[i].w;
      if(tw>m){res++;tw=a[i].w;}
    }else{
      res++;tw=a[i].w;
    }
  }
  cout<<res;
}
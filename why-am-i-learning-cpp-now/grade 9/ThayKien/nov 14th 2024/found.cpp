#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
int n,m,q;
ll a[100001];
int bsearch(int val,int l,int r){
  while(l<=r){
    int m=l+(r-l)/2;
    if(a[m]==val){return 1;}
    if(a[m]<val){l=m+1;}else{r=m-1;}
  }
  return 0;
}
int main(){
  cin>>n>>m;
  for(int i=0;i<n;i++){cin>>a[i];}
  std::sort(a,a+n);
  for(int i=1;i<=m;i++){
    cin>>q;
    cout<<bsearch(q,0,n-1)<<"\n";
  }
}
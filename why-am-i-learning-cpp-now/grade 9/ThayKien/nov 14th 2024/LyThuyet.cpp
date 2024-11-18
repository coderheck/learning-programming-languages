#include"iostream"
#include"algorithm"
using namespace std;
int a[1000000],n;
int binSearch(int x,int l,int r){
  while(l<=r){
    int m=l+(r-l)/2;
    if(a[m]==x){return m;break;}
    if(a[m]<x){l=m+1;}else{r=m-1;}
  }
  return -1;
}
int main(){
  freopen("LyThuyet.inp","r",stdin);
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  cout<<binSearch(93,0,n-1);
}
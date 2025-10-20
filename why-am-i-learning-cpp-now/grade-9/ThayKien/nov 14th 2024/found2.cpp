#include"iostream"
#include"algorithm"
using namespace std;
int n,m;
long long a[100005];
int lbound(int x,int l,int r){
  int pos=-1;
  while(l<=r){
    int m=(l+r)/2;
    if(a[m]>=x){pos=m;r=m-1;}else{l=m+1;}
  }
  return pos;
}
int ubound(int x,int l,int r){
  int pos=-1,m;
  while(l<=r){
    m=(l+r)/2;
    if(a[m]>x){pos=m;r=m-1;}else{l=m+1;}
  }
  return pos;
}
int main(){
  cin>>n>>m;
  for(int i=1;i<=n;i++){cin>>a[i];}
  sort(a+1,a+n+1);
  while(m--){
    int x;cin>>x;
    int l=lbound(x,1,n);
    int r=ubound(x,1,n);
    if(r==-1&&l!=-1){cout<<1<<"\n";}else{cout<<r-l<<"\n";}
  }
}
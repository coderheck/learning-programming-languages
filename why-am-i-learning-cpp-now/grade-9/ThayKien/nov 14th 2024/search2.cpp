#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
#define maxN 500000
int n,q;ll a[maxN+1];
int lbound(int x,int l,int r){
  int pos=-1;
  while(l<=r){
    int m=(l+r)/2;
    if(a[m]>=x){pos=m;r=m-1;}else{l=m+1;}
  }
  return pos;
}
int main(){
  cin>>n>>q;
  for(int i=1;i<=n;i++){cin>>a[i];}
  for(int i=1;i<=q;i++){
    int x;cin>>x;
    cout<<lbound(x,1,n)<<"\n";
  }
}
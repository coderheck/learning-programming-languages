#include"iostream"
using namespace std;
#define ll long long
#define maxN 500000
ll a[maxN+5];
int n,q;
int ubound(int x,int l,int r){
  int pos=-1,m;
  while(l<=r){
    m=(l+r)/2;
    if(a[m]>x){pos=m;r=m-1;}else{l=m+1;}
  }
  return pos;
}
int main(){
  cin>>n>>q;
  for(int i=1;i<=n;i++){cin>>a[i];}
  while(q--){
    int k;cin>>k;
    cout<<ubound(k,1,n)<<"\n";
  }
}
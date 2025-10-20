#include"iostream"
using namespace std;
#define maxN 1000000
int n,l=0,r=0,a[maxN+5],cnt[maxN+5],res,maxend;
int max(int a,int b){return(a>b)?a:b;}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
    cnt[i]=cnt[i-1]+a[i];
  }
  res=a[0];maxend=a[0];
  for(int i=0;i<n;i++){
    maxend=max(maxend+a[i],a[i]);
    res=max(res,maxend);
  }
  cout<<res;
}
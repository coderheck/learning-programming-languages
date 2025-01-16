#include"iostream"
#include"vector"
#include"algorithm"
using namespace std;
#define ll long long
int max(int a,int b){return(a>b)?a:b;}
int n,a[1000005];ll k,s=0;
void buffalo(){
  int res=0,s=0;
  for(int i=1;i<n-1;i++){
    s=a[i];int st=i,nd=i;
    for(int j=i+1;j<n-1;i++){
      if(s+a[j]<=k){s+=a[j];nd++;}else{break;}
    }
    res=max(res,nd-st);
  }
  cout<<n-res;
}
int main(){
  cin>>n>>k;
  for(int i=0;i<n;i++){cin>>a[i];}
  buffalo();
}
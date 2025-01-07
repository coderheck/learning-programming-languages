#include"iostream"
using namespace std;
#define maxN 200000
int n,a[maxN+5],res=0;
int max(int a,int b){return(a>b)?a:b;}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(a[i]>=a[j]){res=max(res,a[i]%a[j]);}
    }
  }
  cout<<res;
}
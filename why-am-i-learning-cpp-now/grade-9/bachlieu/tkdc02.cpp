#include"iostream"
using namespace std;
#define ll long long
int max(int a,int b){return(a>b)?a:b;}
int n,res=0;ll a[100005];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  int l=0;
  for(int i=0;i<n;i++){
    if(i>=2&&a[i]==a[i-1]&&a[i]==a[i-2]){l=2;}else{l++;}
    res=max(res,l);
  }
  cout<<res;
}

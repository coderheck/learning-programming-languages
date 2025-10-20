#include"iostream"
using namespace std;
int max(int a,int b){return(a>b)?a:b;}
int n,res=0,maxEnd=0,a[100005];
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  res=maxEnd=a[0];
  for(int i=1;i<n;i++){
    maxEnd=max(maxEnd+a[i],a[i]);
    res=max(res,maxEnd);
  }
  cout<<res;
}
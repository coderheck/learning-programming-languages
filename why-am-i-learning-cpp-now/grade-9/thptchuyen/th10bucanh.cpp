#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
ll w,a[1000005],cur=0;int n,res=0;
int main(){
  cin>>w>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  for(int i=0;i<n;i++){
    cur+=a[i];
    if(cur>w){cout<<res;exit(0);}
    res++;
  }
  cout<<res;
}
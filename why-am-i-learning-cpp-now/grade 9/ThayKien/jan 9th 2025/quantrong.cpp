#include"iostream"
using namespace std;
int n,res=0,a[500005],pos[500005],sum[500005];
int max(int a,int b){return(a>b)?a:b;}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    sum[i]=sum[i-1]+a[i];
  }
  for(int i=1;i<=n;i++){
    if(pos[a[i]]){res=max(res,sum[i]-sum[pos[a[i]]-1]);}
    if(!pos[a[i]]){pos[a[i]]=i;}
  }
  cout<<res;
}
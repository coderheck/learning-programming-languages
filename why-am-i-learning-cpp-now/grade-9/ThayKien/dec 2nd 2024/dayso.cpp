#include"iostream"
#include"climits"
using namespace std;
#define ll long long
#define maxN 1000000
int n,st[maxN+5],ls[maxN+5];
ll a[maxN+5],sum[maxN+5],res=LLONG_MIN;
int main(){
  for(int i=0;i<=maxN;i++){st[i]=-1;}
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    sum[i]=sum[i-1]+a[i];
  }
  for(int i=1;i<=n;i++){
    if(st[a[i]]==-1){
      st[a[i]]=i;
    }
    ls[a[i]]=i;
  }
  for(int i=1;i<=maxN;i++){
    if(st[i]!=-1){
      int l=st[i],r=ls[i];
      ll thissum=sum[r]-sum[l-1];
      if(res<thissum){res=thissum;}
    }
  }
  cout<<res;
}
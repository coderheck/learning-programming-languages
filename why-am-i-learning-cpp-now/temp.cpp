#include"iostream"
using namespace std;
#define maxn 1000000
int n,res=0,s,a[maxn+5],cnt[maxn+5],sum[maxn+5];
int main(){
  cin>>n>>s;
  cnt[0]=1;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum[i]=sum[i-1]+a[i];
    if(sum[i]>=s){res+=cnt[sum[i]-s];}
    cnt[sum[i]]++;
  }
  cout<<res;
}
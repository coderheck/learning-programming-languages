#include"iostream"
using namespace std;
#define maxN 1000000
int n,s,cnt[maxN+5],a[maxN+5],sum[maxN+5],res=0;
int main(){
  cin>>n>>s;
  cnt[0]=1;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum[i]=sum[i-1]+a[i];
    if(sum[i]>=s){
      res+=cnt[sum[i]-s];
    }
    cnt[sum[i]]++;
  }
  cout<<res;
}
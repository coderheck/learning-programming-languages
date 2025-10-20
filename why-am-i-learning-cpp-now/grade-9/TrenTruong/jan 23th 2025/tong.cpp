#include"iostream"
#include"map"
using namespace std;
#define maxN 100000
#define ll long long
int n;ll res=0,a[maxN+5],sum[maxN+5];map<ll,ll>cnt;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cnt[0]=1;
  cin>>n;
  for(int i=1;i<=n;i++){cin>>a[i];}
  for(int i=1;i<=n;i++){
    sum[i]=sum[i-1]+a[i];
    res+=cnt[sum[i]-0];
    cnt[sum[i]]++;
  }
  cout<<res;
}
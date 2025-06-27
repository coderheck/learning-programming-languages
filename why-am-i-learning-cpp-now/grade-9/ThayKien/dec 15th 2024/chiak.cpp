#include"iostream"
using namespace std;
#define ll long long
#define maxN 1000000
int n,res=0;
ll a[maxN+5],cnt[maxN+5],sum[maxN+5],k;
int main(){
  cin>>n>>k;
  cnt[0]=1;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    sum[i]=sum[i-1]+a[i];
    ll r=((sum[i]%k)+k)%k;
    res+=cnt[r];
    cnt[r]++;
  }
  cout<<res;
}
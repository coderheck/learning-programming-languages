#include"iostream"
#include"map"
using namespace std;
#define ll long long
int n;ll k,a[100005],res=0;map<ll,ll>cnt;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n>>k;
  cnt[0]=1;
  for(int i=1;i<=n;i++){cin>>a[i];}
  for(int i=1;i<=n;i++){
    if(cnt.count(a[i]-k)){res+=cnt[a[i]-k];}
    if(k!=0&&cnt.count(a[i]+k)){res+=cnt[a[i]+k];}
    cnt[a[i]]++;
  }
  cout<<res;
}
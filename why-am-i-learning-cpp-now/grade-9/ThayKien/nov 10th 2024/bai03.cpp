#include"iostream"
#include"map"
using namespace std;
#define maxN 50000
#define ll long long
int n,d,res=0,a[maxN+1];
map<int,int>cnt;
map<ll,ll>sum;
int main(){
  cin>>d>>n;
  cnt[0]=1;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum[i]=sum[i-1]+a[i];
    int v=sum[i]%d;
    res+=cnt[v];
    cnt[v]++;
  }
  cout<<res;
}
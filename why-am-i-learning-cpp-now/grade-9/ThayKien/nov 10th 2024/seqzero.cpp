#include"iostream"
#include"map"
using namespace std;
#define maxN 100000
#define ll long long
int n,res=0,a[maxN+1];
map<int,int>cnt;
ll sum[maxN+1];
int main(){
  cin>>n;
  cnt[0]=1;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum[i]=sum[i-1]+a[i];
    res+=cnt[sum[i]];
    cnt[sum[i]]++;
  }
  cout<<res;
}
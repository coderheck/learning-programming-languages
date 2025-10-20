#include"iostream"
#include"map"
using namespace std;
#define maxN 1000000
#define ll long long
int n,k,res=0,a[maxN+1];
map<ll,ll>cnt;
ll sum=0;
int main(){
  cin>>n>>k;
  cnt[0]=1;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum=(sum+a[i])%k;
    if(sum<0){sum+=k;}
    res+=cnt[sum];
    cnt[sum]++;
  }
  cout<<res;
}
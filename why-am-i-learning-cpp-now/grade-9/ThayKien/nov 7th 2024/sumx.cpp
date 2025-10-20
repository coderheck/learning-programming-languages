#include"iostream"
#include"map"
using namespace std;
#define ll long long
#define maxN 100000
int m,n;
ll a[maxN+5],b[maxN+5],res=0,x;
map<ll,ll>cnt;
int main(){
  cin>>m>>n>>x;
  cnt[0]=1;
  for(int i=1;i<=m;i++){
    cin>>a[i];cnt[x-a[i]]++;
  }
  for(int j=1;j<=n;j++){
    cin>>b[j];
    res+=cnt[b[j]];
  }
  cout<<res;
}
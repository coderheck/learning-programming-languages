#include"iostream"
#include"map"
using namespace std;
#define ll long long
int n,res=0;ll a[100005],s;
map<ll,ll>cnt;
int main(){
  cin>>n>>s;
  cnt[0]=1;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    res+=cnt[s-a[i]];
    cnt[a[i]]++;
  }
  cout<<res;
}
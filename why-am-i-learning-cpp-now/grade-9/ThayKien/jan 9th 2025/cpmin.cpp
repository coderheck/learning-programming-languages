#include"iostream"
#include"unordered_map"
using namespace std;
#define ll long long
int n;ll a[1000005],scp[1000005];
ll max(ll a,ll b){return(a>b)?a:b;}
unordered_map<ll,ll>cnt;
int main(){
  cnt.reserve(1000005);
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];cnt[a[i]]++;}
  for(int i=0;i<=1000001;i++){
    ll sq=i*i;
    if(!cnt[sq]){cout<<sq;return 0;}
  }
}
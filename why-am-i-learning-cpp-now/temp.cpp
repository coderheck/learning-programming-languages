#include"iostream"
using namespace std;
#define ll long long
int n;
ll a[1000005];
ll max(ll a,ll b){return(a>b)?a:b;}
void solve(){
  ll res=a[0],maxEnd=a[0];
  for(int i=1;i<n;i++){
    maxEnd=max(maxEnd+a[i],a[i]);
    res=max(res,maxEnd);
  }
  cout<<res;
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  solve();
}
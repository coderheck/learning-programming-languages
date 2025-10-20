#include"iostream"
#include"algorithm"
#include"climits"
using namespace std;
#define ll long long
int n,m;ll a[100005],res=LLONG_MAX;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n>>m;
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  for(int i=0;i<n-m+1;i++){
    ll d=a[i+m-1]-a[i];
    res=min(res,d);
  }
  cout<<res;
}
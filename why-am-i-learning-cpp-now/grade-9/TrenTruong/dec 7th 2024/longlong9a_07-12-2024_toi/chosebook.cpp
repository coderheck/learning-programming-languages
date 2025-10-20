#include"iostream"
#include"algorithm"
#include"climits"
using namespace std;
#define ll long long
const int maxN=10000000;
ll min(ll a,ll b){return(a<b)?a:b;}
int n,m;ll a[maxN+5],minDiff=LLONG_MAX;
int main(){
  cin>>n>>m;
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  for(int i=0;i<=n-m;i++){
    minDiff=min(minDiff,a[i+m-1]-a[i]);
  }
  cout<<minDiff;
}
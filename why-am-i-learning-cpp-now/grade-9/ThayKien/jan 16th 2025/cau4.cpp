#include"iostream"
#include"algorithm"
#include"cmath"
using namespace std;
#define ll long long
int n,m;ll a[100005],sa[100005],b[100005];
ll max(ll a,ll b){return(a>b)?a:b;}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n>>m;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<m;i++){cin>>b[i];}
  sort(a,a+n);
  for(int i=0;i<n;i++){sa[i]=sa[i-1]+a[i];}
  for(int i=0;i<m;i++){
    ll t=0;
    int p=upper_bound(a,a+n,b[i])-a-1;
    if(p>=0){t+=b[i]*(p+1)-sa[p];}
    if(p+1<n){t+=(sa[n-1]-(p>=0?sa[p]:0))-b[i]*(n-p-1);}
    cout<<t<<" ";
  }
}
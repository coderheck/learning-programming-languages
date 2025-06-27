#include"iostream"
#include"algorithm"
#include"functional"
using namespace std;
#define maxN 1000000
int n,k,a[maxN+5],res=0;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n>>k;
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n,greater<int>());
  res=a[0];
  for(int i=1;i<=k;i++){res+=a[i];}
  for(int i=k+1;i<n;i++){res-=a[i];}
  cout<<res;
}
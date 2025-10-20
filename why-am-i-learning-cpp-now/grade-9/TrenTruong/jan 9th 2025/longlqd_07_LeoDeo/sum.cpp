#include"iostream"
#include"algorithm"
using namespace std;
int n,k,sum=0,a[10005];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n>>k;
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  for(int i=k;i<n;i++){sum+=a[i];}
  cout<<sum<<" ";sum=0;
  for(int i=0;i<n-k;i++){sum+=a[i];}
  cout<<sum;
}
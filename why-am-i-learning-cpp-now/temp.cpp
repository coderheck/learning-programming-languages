#include"iostream"
#include"algorithm"
#define ll long long
using namespace std;
int main(){
  int n;cin>>n;ll a[n];
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  cout<<(a[n-1]-a[0])*(a[n-1]+a[0]);
}
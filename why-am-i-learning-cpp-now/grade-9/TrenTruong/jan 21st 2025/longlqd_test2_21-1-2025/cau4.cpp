#include"iostream"
#include"algorithm"
using namespace std;
int n,a[1000005];
int main(){
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  cout<<a[n-1]+a[n-2]-a[0];
}
#include"iostream"
#include"algorithm"
#define ll long long
using namespace std;
int main(){
  int n;cin>>n;int a[n];
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  for(int i=n-2;i>=0;i--){if(a[i]!=a[n-1]){cout<<a[i];break;}}
}

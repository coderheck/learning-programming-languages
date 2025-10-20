#include"iostream"
#include"algorithm"
#include"algorithm"
using namespace std;
#define ll long long
int n;ll a[1000005];
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n,greater<ll>());
  cout<<a[0]+a[1];
}
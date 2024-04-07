#include"iostream"
#include"climits"
#include"algorithm"
#define ll long long
#define kbcl 0
using namespace std;
int kbc(){
  int n;cin>>n;ll a[n],minH=LLONG_MAX;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      minH=min(minH,abs(a[i]-a[j]));
    }
  }
  cout<<minH;
  return kbcl;
}

#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
ll s,a[10005],n,res=0;
int main(){
  cin>>n>>s;
  for(ll i=0;i<n;i++){cin>>a[i];}
  for(ll i=1;i<n;i++){
    a[i]+=a[i-1];
    if(a[i]>s||a[i]<s*-1){res++;}
  }
  if(a[0]>s||a[0]<s*-1){res++;}
  sort(a,a+n);
  for(int i=0;i<n;i++){
    res+=n-(upper_bound(a,a+n,a[i]+s)-a);
  }
  cout<<res;
}
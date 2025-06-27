#include"iostream"
#include"map"
#include"algorithm"
using namespace std;
#define ll long long
int n,ac=0;map<ll,int>cnt;ll a[1000005],t;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>t;
    if(!cnt[t]){a[ac++]=t;cnt[t]=1;}
  }
  sort(a,a+ac);
  for(int i=0;i<ac;i++){cout<<a[i]<<" ";}
}
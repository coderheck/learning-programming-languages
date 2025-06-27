#include"iostream"
using namespace std;
#define mod 1000000007
#define ll long long
ll n,a[100005],s=0,res=0;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];s+=a[i];}
  for(int i=0;i<n;i++){
    s-=a[i];
    res=res+((a[i]%mod)*(s%mod))%mod;
  }
  cout<<res;
}
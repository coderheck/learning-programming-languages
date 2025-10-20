#include"iostream"
using namespace std;
#define maxN 100000
#define ll long long
const ll MOD=1000000007;
int n,a[maxN+5],cnt[maxN+5];
long long res=0;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
    res=(res%MOD+cnt[a[i]]%MOD)%MOD;
    cnt[a[i]]++;
  }
  cout<<res;
}
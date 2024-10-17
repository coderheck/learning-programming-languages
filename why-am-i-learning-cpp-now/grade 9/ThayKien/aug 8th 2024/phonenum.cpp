#include"iostream"
#include"string"
#include"map"
using namespace std;
#define ll long long
ll n,k;
string tmp;map<string,ll>cnt;
int main(){
  cin>>n>>k;
  for(ll i=1;i<=n;i++){cin>>tmp;cnt[tmp]++;}
  for(ll i=1;i<=k;i++){cin>>tmp;cout<<cnt[tmp]<<" ";}
}

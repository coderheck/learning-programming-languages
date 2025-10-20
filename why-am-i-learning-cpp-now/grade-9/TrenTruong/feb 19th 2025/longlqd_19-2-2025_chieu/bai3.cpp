#include"iostream"
using namespace std;
int n,a,maxN=-1,cnt[1000005];
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n;
  while(n--){cin>>a;cnt[a]++;if(maxN<a){maxN=a;}}
  cout<<cnt[maxN];
}
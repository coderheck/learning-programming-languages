#include"iostream"
using namespace std;
#define maxN 100000
#define ll long long
ll n;
int a[maxN+5],cnt[maxN+5],sum[maxN+5];
void solve(){
  ll resSt=0,resEnd=0,curSt=0;
  int maxS=a[0],maxEnd=a[0];
  for(ll i=1;i<n;i++){
    if(maxEnd+a[i]<a[i]){
      maxEnd=a[i];curSt=i;
    }else{
      maxEnd+=a[i];
    }
    if(maxEnd>maxS){
      maxS=maxEnd;
      resSt=curSt;resEnd=i;
    }
  }
  cout<<maxS<<'\n';
  for(ll i=resSt;i<=resEnd;i++){cout<<a[i]<<" ";}
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  for(int i=1;i<=n;i++){cin>>a[i];}
  solve();
}
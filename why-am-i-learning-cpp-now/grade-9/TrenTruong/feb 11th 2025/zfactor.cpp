#include"iostream"
using namespace std;
#define ll long long
#define maxN 1000000
int pr[maxN+5],cnt[maxN+5];
int n,k,a;ll res=0;
void prSieve(){
  for(int i=2;i<=k;i++){
    if(!pr[i]){
      for(int j=i;j<=k;j+=i){
        if(!pr[j]){
          pr[j]=i;cnt[i]++;
        }
      }
    }
  }
}
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n>>k;
  prSieve();
  while(n--){
    cin>>a;
    cout<<cnt[a]<<"\n";
  }
}
#include"iostream"
using namespace std;
int n,k,res=0,a[1000005],cnt[1000005];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n>>k;
  cnt[0]=1;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    if(a[i]<k){
      res+=cnt[k-a[i]];
      cnt[k-a[i]]++;
    }
  }
  cout<<res;
}
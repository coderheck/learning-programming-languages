#include"iostream"
#include"unordered_map"
using namespace std;
#define ll long long
int max(int a,int b){return(a>b)?a:b;}
int n,res=0;ll p,a[100005];unordered_map<ll,int>pos,cnt;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n>>p;
  pos[0]=1;cnt[0]=1;
  for(int i=1;i<=n;i++){cin>>a[i];pos[a[i]]=max(pos[a[i]],i);}
  for(int i=1;i<=n;i++){
    if(cnt[a[i]-p]>=1){res=max(res,i-pos[a[i]-p]);}
    cnt[a[i]-p]++;
  }
  cout<<res;
}
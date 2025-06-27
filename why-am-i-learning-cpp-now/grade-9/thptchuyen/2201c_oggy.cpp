#include"iostream"
#include"map"
using namespace std;
#define ll long long
ll n,a,m,res=0;map<ll,ll>cnt;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n>>m;
  while(n--){
    cin>>a;
    for(int j=a;j<=m;j+=a){
      if(cnt[j]==0){res++;}
      cnt[j]++;
    }
  }
  cout<<res;
}
#include"iostream"
using namespace std;
#define ll long long
ll n,m,q,k,dem[100005];
ll max(ll a,ll b){return(a>b)?a:b;}
ll min(ll a,ll b){return(a<b)?a:b;}
int main(){
  freopen("dayden.inp","r",stdin);
  freopen("dayden.out","w",stdout);
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n>>m>>q>>k;
  for(ll x,i=1;i<=m;i++){
    cin>>x;
    dem[max(1,x-k)]++;
    dem[min(n+1,x+k+1)]--;
  }
  for(ll i=1;i<=n;i++){dem[i]+=dem[i-1];}
  for(ll x,i=1;i<=q;i++){
    cin>>x;
    if(dem[x]&1){cout<<"D\n";}else{cout<<"V\n";}
  }
}
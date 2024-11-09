#include"iostream"
#include"map"
using namespace std;
#define ll long long
#define maxN 100000
int m,n;
ll a[maxN+5],b[maxN+5],res=0,x;
map<ll,ll>cnt;
void ea(){for(int i=1;i<=m;i++){cin>>a[i];cnt[a[i]]++;}}
void compute(){
  for(int j=1;j<=n;j++){
    cin>>b[j];
    if(a[j]<=0){res+=cnt[x-b[j]];}
  }
  cout<<res;
}
int main(){
  cin>>m>>n>>x;
  cnt[0]=1;
  ea();
  compute();
}
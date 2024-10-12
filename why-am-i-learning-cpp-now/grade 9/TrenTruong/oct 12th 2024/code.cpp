#include"iostream"
using namespace std;
#define ll long long
#define maxN 100000000
ll cnt[maxN+1],a,maxC=0;
int n;
void parse(){
  for(ll i=maxC;i>=1;i--){
    if(cnt[i]==0){cout<<i;return;}
  }
  cout<<maxC+1;
}
int main(){
  if(fopen("code.inp","r")){
    freopen("code.inp","r",stdin);
    freopen("code.out","w",stdout);
  }
  cin>>n;
  for(int i=1;i<=n;i++){cin>>a;cnt[a]++;if(a>maxC){maxC=a;}}
  parse();
}
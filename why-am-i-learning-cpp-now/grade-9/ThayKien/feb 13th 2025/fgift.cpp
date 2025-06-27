#include"iostream"
using namespace std;
#define ll long long
int n,m;ll a[300005],res=10000000000;
bool luckygirls(const ll &c){
  ll r=0;
  for(int i=0;i<m;i++){
    r+=a[i]/c;
    if(a[i]%c!=0){r++;}
  }
  return(r<=n);
}
void bitchsearch(){
  ll l=1,r=1000000005,m;
  while(l<=r){
    m=l+(r-l)/2;
    if(luckygirls(m)){r=m-1;if(res>m){res=m;}}else{l=m+1;}
  }
  cout<<res;
}
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n>>m;
  for(int i=0;i<n;i++){cin>>a[i];}
  bitchsearch();
}
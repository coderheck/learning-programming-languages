#include"iostream"
using namespace std;
#define ll long long
#define maxN 1000000
int n;ll a[maxN+5],k,res=0;
bool canCut(const ll &l){
  ll c=0;
  for(int i=0;i<n;i++){c+=a[i]/l;if(c>=k){return true;}}
  return false;
}
void bitchsearch(){
  ll l=1,r=1000000005,m;
  while(l<=r){
    m=l+(r-l)/2;
    if(canCut(m)){l=m+1;res=m;}else{r=m-1;}
  }
  cout<<res;
}
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n>>k;
  for(int i=0;i<n;i++){cin>>a[i];}
  bitchsearch();
}
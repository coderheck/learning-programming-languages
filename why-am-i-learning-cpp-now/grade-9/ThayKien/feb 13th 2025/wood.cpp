#include"iostream"
using namespace std;
#define ll long long
int n;ll m,a[1000005],res=-1;
bool shitwood(const ll &h){
  ll c=0;
  for(int i=0;i<n;i++){if(a[i]>=h){c+=a[i]-h;}}
  return(c>=m);
}
void bitchsearch(){
  ll l=0,r=1000000005,m;
  while(l<=r){
    m=l+(r-l)/2;
    if(shitwood(m)){l=m+1;if(res<m){res=m;}}else{r=m-1;}
  }
  cout<<res;
}
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n>>m;
  for(int i=0;i<n;i++){cin>>a[i];}
  bitchsearch();
}
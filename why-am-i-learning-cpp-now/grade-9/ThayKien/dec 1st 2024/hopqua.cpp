#include"iostream"
#include"algorithm"
using namespace std;
int n,d,a[1000005],res=0;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin>>n>>d;
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  int l=0,r=n-1;
  while(l<r){
    if(a[r]-a[l]<=d&&r-l==2){
      res+=(r-l);
      l++;
    }else{r--;}
  }
  cout<<res;
}
#include"iostream"
#include"algorithm"
using namespace std;
int n,k,m[1000005],res=0;
int main(){
  cin>>n>>k;
  int l=0,r=n-1;
  for(int i=0;i<n;i++){cin>>m[i];}
  sort(m,m+n);
  while(l<r){
    if(m[l]+m[r]<=k){
      res+=(r-l);l++;
    }else{r--;}
  }
  cout<<res;
}
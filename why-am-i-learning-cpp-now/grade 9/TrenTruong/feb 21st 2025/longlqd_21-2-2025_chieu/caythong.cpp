#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
#define ll long long
int n;ll a[100005],b[100005],re=LLONG_MAX;
ll bitchsearch(const ll &optimal){
  ll best=b[0];int l=0,r=n-1;
  while(l<=r){
    int m=l+(r-l)/2;
    if(abs(b[m]-optimal)<abs(best-optimal)){best=b[m];}
    if(b[m]<optimal){l=m+1;}else{r=m-1;}
  }
  return abs(best-optimal);
}
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){cin>>b[i];}
  sort(a,a+n);sort(b,b+n);
  for(int i=0;i<n;i++){
    re=min(re,bitchsearch(-a[i]));
  }
  cout<<re;
}
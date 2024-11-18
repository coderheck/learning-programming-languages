#include"iostream"
#include"cmath"
using namespace std;
#define ll long long
ll min(ll a,ll b){return(a<b)?a:b;}
ll max(ll a,ll b){return(a>b)?a:b;}
int n;ll k,h,a[1000005],sum[1000005],maxFruits=0;
void ParseArray(){
  int reach=ceil(h*1.0/k);
  for(int i=0;i<n;i++){
    sum[i]=sum[i-1]+a[i];
  }
  for(int i=0;i<n;i++){
    int l=max(0,i-reach);
    int r=min(n-1,i+reach);
    ll s=sum[r]-sum[l];
    maxFruits=max(maxFruits,s);
  }
  cout<<maxFruits;
}
int main(){
  if(fopen("vln.inp","r")){
    freopen("vln.inp","r",stdin);
    // freopen("vln.out","w",stdout);
  }
  cin>>n>>k>>h;
  for(int i=0;i<n;i++){cin>>a[i];}
  ParseArray();
}
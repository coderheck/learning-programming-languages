#include<iostream>
using namespace std;
#define ll long long
int max(int &a,int &b){return(a>b)?a:b;}
int min(int &a,int &b){return(a<b)?a:b;}
ll n;int m,a[1000005],res=100000000;
bool giftacondom(const int &amount){
  int c=0;
  for(int i=0;i<m;i++){c+=a[i]/amount+(a[i]%amount>=1);}
  return c>=n;
}
void bitchsearch(){
  int l=1,r=10,k,res=r;
  while(l<=r){
    k=l+(r-l)/2;
    if(giftacondom(k)){res=k;l=k+1;}else{r=k-1;}
  }
  cout<<res;
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>m;
  for(int i=0;i<m;i++){cin>>a[i];}
  bitchsearch();
}
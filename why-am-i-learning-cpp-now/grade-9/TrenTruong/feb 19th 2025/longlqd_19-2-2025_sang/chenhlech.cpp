#include"iostream"
#include"algorithm"
using namespace std;
int max(int a,int b){return(a>b)?a:b;}
int n,maxA=0,a[100005],lmax[100005],rmax[100005],diff[100005];
void proc(){
  lmax[0]=a[0];
  for(int i=1;i<n;i++){lmax[i]=max(lmax[i-1],a[i]);}
  rmax[n-1]=a[n-1];
  for(int i=n-2;i>=0;i--){rmax[i]=max(rmax[i+1],a[i]);}
  for(int i=0;i<n;i++){
    int maxR=0;
    if(i==0){
      maxR=rmax[i+1];
    }else if(i==n-1){
      maxR=lmax[i-1];
    }else{
      maxR=max(lmax[i-1],rmax[i+1]);
    }
    diff[i]=maxR-a[i];
  }
  for(int i=0;i<n;i++){cout<<diff[i]<<" ";}
}
int main(){
  ios::sync_with_stdio(0);
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  proc();
}
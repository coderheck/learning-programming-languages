#include"iostream"
using namespace std;
int n,a[5],x,res=0;
int max(int a,int b){return(a>b)?a:b;}
int min(int a,int b){return(a<b)?a:b;}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  while(n--){cin>>x;a[x]++;}
  res+=a[4];res+=a[2]/2;
  a[2]%=2;
  x=min(a[1],a[3]);res+=x;
  a[1]-=x;a[3]-=x;
  res+=a[3];
  if(a[2]>0){
    res++;
    a[1]=max(a[1]-2,0);
  }
  res+=(a[1]+3)/4;
  cout<<res;
}
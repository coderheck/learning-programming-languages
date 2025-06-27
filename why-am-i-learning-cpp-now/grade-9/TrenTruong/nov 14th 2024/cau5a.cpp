#include"iostream"
#include"algorithm"
using namespace std;
#define maxN 8500
#define ll long long
ll n,res=0,a[maxN+5],cnt[100000005];
int main(){
  if(fopen("cau5a.inp","r")){
    freopen("cau5a.inp","r",stdin);
    freopen("cau5a.out","w",stdout);
  }
  cin>>n;
  for(int i=1;i<=n;i++){cin>>a[i];}
  for(int i=1;i<=n-2;i++){
    for(int j=i+1;j<=n-1;j++){
      for(int k=j+1;k<=n;k++){
        res+=(a[i]+a[j]>a[k]&&a[i]+a[k]>a[j]&&a[k]+a[j]>a[i]);
      }
    }
  }
  cout<<res;
}
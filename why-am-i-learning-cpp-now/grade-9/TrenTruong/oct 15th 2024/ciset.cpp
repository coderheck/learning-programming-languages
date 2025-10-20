#include"iostream"
using namespace std;
#define ll long long
#define maxN 5000
int n,a[maxN];
int main(){
  if(fopen("ciset.inp","r")){
    freopen("ciset.inp","r",stdin);
    freopen("ciset.out","w",stdout);
  }
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int x=0;x<n;x++){
    int ans=0;
    for(int i=2;i<x;i++){
      for(int j=1;j<i;j++){
        for(int k=0;k<j;k++){
          if(a[i]+a[j]+a[k]==a[x]){ans++;}
        }
      }
    }
    cout<<ans<<" ";
  }
}
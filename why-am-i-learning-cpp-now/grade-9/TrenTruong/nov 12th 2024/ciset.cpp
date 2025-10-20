#include"iostream"
using namespace std;
#define ll long long
#define maxN 5000
ll n,a[maxN+5],dem[maxN+5],ans=0;
int main(){
  if(fopen("ciset.inp","r")){
    freopen("ciset.inp","r",stdin);
    freopen("ciset.out","w",stdout);
  }
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n-3;i++){
    for(int j=i+1;j<n-2;j++){
      for(int k=j+1;k<n-1;k++){
        for(int x=k+1;x<n;x++){
          if(a[i]+a[j]+a[k]==a[x]){dem[x]++;}
        }
      }
    }
  }
  for(int i=0;i<n;i++){cout<<dem[i]<<" ";}
}
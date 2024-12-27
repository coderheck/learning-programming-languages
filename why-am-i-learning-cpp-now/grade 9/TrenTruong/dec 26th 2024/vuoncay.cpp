#include"iostream"
using namespace std;
int m,n,a[1005][1005];
int main(){
  cin>>m>>n;
  int res=2*m+2*n;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){cin>>a[i][j];}
  }
  for(int i=1;i<n;i++){
    if(a[0][i]!=a[0][i-1]){res++;}
  }
  for(int i=1;i<m;i++){
    if(a[i][0]!=a[i-1][0]){res++;}
  }
  for(int i=1;i<m;i++){
    for(int j=1;j<n;j++){
      if(a[i][j]!=a[i-1][j]){res++;}
      if(a[i][j]!=a[i][j-1]){res++;}
    }
  }
  cout<<res;
}
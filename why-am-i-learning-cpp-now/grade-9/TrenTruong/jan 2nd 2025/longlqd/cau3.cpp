#include"iostream"
#include"string"
using namespace std;
string a,b;
int m,n,dp[5005][5005],res=0;
int max(int a,int b){return(a>b)?a:b;}
int main(){
  getline(cin,a);
  getline(cin,b);
  m=a.size();n=b.size();
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      if(a[i-1]==b[j-1]){
        dp[i][j]=dp[i-1][j-1]+1;
        res=max(res,dp[i][j]);
      }else{
        dp[i][j]=0;
      }
    }
  }
  cout<<res;
}
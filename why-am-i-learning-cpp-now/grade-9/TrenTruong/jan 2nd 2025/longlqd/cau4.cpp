#include"iostream"
#include"string"
using namespace std;
string a,b;
int m,n,dp[5005][5005];
int max(int a,int b){return(a>b)?a:b;}
int main(){
  cin>>m>>n;cin.ignore();
  getline(cin,a);
  getline(cin,b);
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      if(a[i-1]==b[j-1]){
        dp[i][j]=dp[i-1][j-1]+1;
      }else{
        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
      }
    }
  }
  cout<<dp[m][n];
}
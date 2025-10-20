#include"iostream"
#include"string"
using namespace std;
string s1,s2,res,dp[5005][5005];
int main(){
  getline(cin,s1);
  getline(cin,s2);
  for(int i=1;i<=s1.size();i++){
    for(int j=1;j<=s2.size();j++){
      if(s1[i-1]==s2[j-1]){
        dp[i][j]=dp[i-1][j-1]+s1[i-1];
      }
      if(dp[i][j].size()>res.size()){
        res=dp[i][j];
      }
    }
  }
  cout<<res;
}
#include"iostream"
#include"vector"
using namespace std;
class Solution {
public:
  int coinChange(vector<int>& coins, int amount) {
    int n=coins.size();
    vector<int>dp(amount+1);
    dp[0]=1;
    for(int i=0;i<n;i++){
      for(int j=coins[i];j<=amount;j++){
        dp[j]+=dp[j-coins[i]];
      }
    }
    return dp[amount];
  }
};
int main(){
  vector<int>coins={1,2,3};int amount=5;
  Solution sol;
  cout<<sol.coinChange(coins,amount);
}
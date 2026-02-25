#include <iostream>
#include <vector>
class Solution{
public:
	int uniquePaths(int m,int n){
		std::vector<std::vector<int>>dp(m+5,std::vector<int>(n+5,0));
		dp[1][1]=1;
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				if(i==1&&j==1){continue;}
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
		return dp[m][n];
	}
};
int main(){
	std::cin.tie(0)->sync_with_stdio(0);
	int m,n;Solution sol;
	std::cin>>m>>n;
	std::cout<<sol.uniquePaths(m,n); 
}

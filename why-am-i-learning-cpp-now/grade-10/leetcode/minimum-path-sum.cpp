#include <iostream>
#include <vector>
#define tname "minimum-path-sum"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) std::cout<<(x)<<"\n";std::cerr<<(x)<<"\n";
class Solution {
public:
    int minPathSum(std::vector<std::vector<int>>&p){
		const long long inff=1LL<<30;
		int m=p.size(),n=p[0].size();
		std::vector<std::vector<int>>dp(m+5,std::vector<int>(n+5,inff));
		dp[0][0]=p[0][0];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(i==0&&j==0){continue;}
				if(i==0){
					dp[i][j]=p[i][j]+dp[i][j-1];
				}else if(j==0){
					dp[i][j]=p[i][j]+dp[i-1][j];
				}else{
					dp[i][j]=p[i][j]+min(dp[i-1][j],dp[i][j-1]);
				}
			}
		}
        return dp[m-1][n-1];
    }
};
int main(){
	// if(fopen(tname".inp","r")){
	// 	freopen(tname".inp","r",stdin);
	// 	freopen(tname".out","w",stdout);
	// }
	std::cin.tie(0)->sync_with_stdio(0);
	int m,n;
	std::cin>>m>>n;
	std::vector<std::vector<int>>g(m,std::vector<int>(n));
	Solution sol;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){std::cin>>g[i][j];}
	}
	std::cout<<sol.minPathSum(g);
}

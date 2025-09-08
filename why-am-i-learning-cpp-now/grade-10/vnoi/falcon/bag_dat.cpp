#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define ll long long
using namespace std;
int dp[1005][1005];
void solve() {
    int n, m, res=0;
    cin>>n>>m;
    vector<pair<int, int>> a(n+1);
    for(int i=1; i<=n; i++) {
        cin>>a[i].first>>a[i].second;
    }
    for(int i=1; i<=n; i++) {
        for(int w=0; w<=m; w++) {
            dp[i][w]=dp[i-1][w];
        }
        for(int w=a[i].first; w<=m; w++) {
						dp[i][w]=max(dp[i-1][w], dp[i-1][w-a[i].first]+a[i].second);
            if(dp[i][w]>res){ res=dp[i][w]; }
        }
    }
    cout<<res<<' ';
    string ans;ll cc=0;
    for(int i=n; i>=1 && m; i--) {
        if( m>=a[i].first && dp[i][m]==dp[i-1][m-a[i].first]+a[i].second ) {
            m-=a[i].first;
						cc++;
						ans=to_string(i)+"\n"+ans;
        }
    }
    cout<<cc<<'\n'<<ans;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tc=1;
    // cin>>tc;
    while(tc--) {
        solve();
    }
}


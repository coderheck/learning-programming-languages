#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
#define tname "mterchef"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=100005,inff=1000000000007;
ll n,s,t[maxN],sum[maxN],dp[maxN],trace[maxN];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        // freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>s;
    for(ll i=1;i<=n;i++){
		cin>>t[i];
		sum[i]=sum[i-1]+t[i];
		dp[i]=inff;
	}
    // ll i=1,cur=0,maxt=0,sumMax=0;
    // queue<vector<ll>>st;
    // while(i<=n){
    //     vector<ll>curf;
    //     while(i<=n && cur+t[i]<=s){
    //         // if(a[i].val==0){i++;continue;}
    //         cur+=t[i];
    //         curf.push_back(i);
    //         maxt=max(maxt,t[i]);
    //         i++;
    //     }
    //     st.push(curf);sumMax+=maxt;
    //     // debug(maxt);debug(i);
    //     cur=0,maxt=0;
    // }
    // cout<<sumMax<<"\n";
    // while(st.size()){
    //     vector<ll>curf=st.front();st.pop();
    //     for(const ll &x:curf){cout<<x<<" ";}
    //     cout<<"\n";
    // }
	dp[0]=0;
	ll curmax=0;
	for(ll i=1;i<=n;i++){
		curmax=t[i];
		for(ll j=i;j>=1;j--){
			curmax=max(curmax,t[j]);
			if(sum[i]-sum[j-1]<=s){
				if(dp[i]>dp[j-1]+curmax){
					dp[i]=dp[j-1]+curmax;
					trace[i]=j;
				}
			}else{
				break;
			}
		}
	}
	cout<<dp[n]<<"\n";
	ll cur=n,cnt=0;
	vector<vector<ll>>tr(maxN);
	while(cur>0){
		cnt++;
		for(ll i=trace[cur];i<=cur;i++){
			tr[cnt].push_back(i);
		}
		cur=trace[cur];cur--;
	}
	for(ll i=cnt;i>=1;i--){
		for(const ll &x:tr[i]){cout<<x<<" ";}
		cout<<"\n";
	}
}

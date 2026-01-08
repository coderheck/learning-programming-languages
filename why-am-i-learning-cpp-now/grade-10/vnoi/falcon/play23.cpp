#include <iostream>
#include <deque>
#include <vector>
using namespace std;
#define ll long long
#define tname "play23"
const ll maxN=5000005;
ll n,k,a[maxN],res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        // freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    vector<ll>dp(n+5);deque<ll>dq;
    dp[1]=a[1],dq.push_front(1); // luôn bắt đầu từ phần tử đầu tiên
    for(ll i=2;i<=n;i++){
        // [i-k; i-1]
        while(dq.size()&&dq.front()<i-k){dq.pop_front();}
        dp[i]=a[i]+dp[dq.front()];
        // update dq
        while(dq.size()&&dp[dq.back()]<=dp[i]){dq.pop_back();}
        dq.push_back(i);
    }
    cout<<dp[n];
}

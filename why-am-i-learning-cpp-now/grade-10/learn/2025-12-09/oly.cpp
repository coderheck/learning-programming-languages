// #include<iostream>
// #include<vector>
// using namespace std;
// #define ll long long
// #define tname "oly"
// #define max(a,b) ((a)>(b)?(a):(b))
// #define min(a,b) ((a)<(b)?(a):(b))
// const ll maxN=500005;
// ll n,k,a[maxN],b[maxN];
// int main(){
//     if(fopen(tname".inp","r")){
//         freopen(tname".inp","r",stdin);
//         freopen(tname".out","w",stdout);
//     }
//     cin.tie(0)->sync_with_stdio(0);
//     cin>>n>>k;
//     for(ll i=1;i<=n*k;i++){cin>>a[i];}
//     for(ll i=1;i<=n*k;i++){cin>>b[i];}
//     vector<vector<ll>>dp(k*n+5,vector<ll>(k*n+5,0));
//     for(ll i=1;i<=n*k;i++){
//         for(ll j=1;j<=n*k;j++){
//             if(a[i]==b[j]){
//                 dp[i][j]=dp[i-1][j-1]+1;
//             }else{
//                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//     }
//     cout<<dp[n*k][n*k];
// }

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll maxN = 500000 + 5;

ll n, k, a[maxN], b[maxN];
vector<ll> pos[1000005];   // pos[x] lưu các vị trí của x trong dãy b

int main() {
    if(fopen("oly"".inp","r")){
        freopen("oly"".inp","r",stdin);
        freopen("oly"".out","w",stdout);
    }
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    ll nk = n * k;

    for (ll i = 1; i <= nk; i++) cin >> a[i];
    for (ll i = 1; i <= nk; i++) {
        cin >> b[i];
        pos[b[i]].push_back(i);
    }

    // con trỏ hiện tại cho từng số
    vector<ll> ptr(n + 1, 0);

    vector<ll> T;
    T.reserve(nk);

    // ánh xạ A sang vị trí tương ứng trong B
    for (ll i = 1; i <= nk; i++) {
        ll x = a[i];
        T.push_back(pos[x][ptr[x]++]);
    }

    // LIS trên T
    vector<ll> lis;
    for (ll x : T) {
        auto it = lower_bound(lis.begin(), lis.end(), x);
        if (it == lis.end()) lis.push_back(x);
        else *it = x;
    }

    cout << lis.size();
}


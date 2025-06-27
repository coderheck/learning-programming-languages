#include"iostream"
using namespace std;
#define ll long long
#define maxN 10000000
int t,n,res=0;
int main(){
  cin>>t;
  while(t--){
    int a[1005],sum[1005],cnt[1005];
    res=0;
    cin>>n;
    for(int i=1;i<=n;i++){
      cin>>a[i];
      sum[i]=sum[i-1]+a[i];
    }
    cnt[0]=1;
    for(int i=1;i<=n;i++){
      int r=sum[i]%2;
      cnt[r]++;
      if(cnt[r]>1){
        res+=cnt[r]-1;
      }
    }
    cout<<res;
  }
}

// -- sol
// #include <bits/stdc++.h>
// using namespace std;
// #define kien long long
// #define JAV main
// #define Million 1000000
// #define NT 10000000
// #define MOD 1000000007
// kien n,k,m,dem,f[10000], a[10000];
// kien maxx,minn, vtr,ans,l,r;
// unordered_map<kien, kien> pp;

// JAV()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     kien t;
//     cin >> t;
//     while (t--)
//     {
//         cin >> n;
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//             f[i] = f[i - 1] + a[i];
//         }
//         pp[0] = 1;
//         for (int i = 1; i <= n; i++)
//         {
//             pp[f[i] % 2]++;
//             if (pp[f[i] % 2] > 1)
//             {
//                 ans += pp[f[i] % 2] - 1;
//             }
//         }
//         cout << ans << "\n";
//         ans = 0;
//         pp.clear();
//     }
// }
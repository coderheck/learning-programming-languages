#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
#define tname "fibodistribute"
#define ll long long
#define umap unordered_map
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=100005,modN=1000000007;
ll n,m,a[maxN],ss[maxN],res=0;
ll dp[maxN]; // dp[i] = số cách chia hợp lệ trong [1...i]
// bool cut[maxN]; // cut[i]=true -> cắt tại i
vector<ll>fib;
void preproc(const ll &lim){
    ll l=0,r=1,s=0;
    while(r<=lim){
        s=l+r;l=r,r=s;
        fib.push_back(s);
    }
}
// sub 1
// bool calc(){
//     ll sum=0;
//     for(ll i=1;i<=n;i++){
//         sum+=a[i];
//         if(cut[i]){
//             if(!check[sum]){return false;}
//             sum=0;
//         }
//     }
//     return check[sum];
// }
// void backt(const ll &i){
//     if(i==n){res+=calc();return;}
//     backt(i+1);cut[i]=true;
//     backt(i+1);cut[i]=false;
// }
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        ss[i]=ss[i-1]+a[i];
    }
    preproc(ss[n]);
    dp[0]=1;
    for(ll i=1;i<=n;i++){
        ll lst=i;
        // nếu trong đoạn [1...lst] mà không tìm được j để
        // sum[j...i] >= số fibo đang xét thì dừng sớm
        for(const ll &x:fib){
            ll l=1,r=lst,j=-1;
            // j là vị trí lớn nhất sao cho sum[j...i] >= x
            while(l<=r){
                m=l+r>>1;
                if(ss[i]-ss[m-1]>=x){j=m;l=m+1;}else{r=m-1;}
            }
            if(j==-1){break;}
            if(ss[i]-ss[j-1]==x){dp[i]=(dp[i]%modN+dp[j-1]%modN)%modN;}
            lst=j;
        }
    }
    lout(dp[n]);
}

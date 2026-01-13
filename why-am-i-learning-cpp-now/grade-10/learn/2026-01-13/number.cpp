#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
#define tname "number"
#define ll long long
#define umap unordered_map
#define debug(x) cout<<(x)<<" ";
const ll maxN=10000,maxA=80000;
ll  n,k,a[maxN+5],
    maxa[11]={0,10000,100,21,10,6,4,3,3,2,2}; // tà đạo
    // maxa[k] tương ứng với a lớn nhất mà a^k <= maxA
umap<ll,bool>cnt; // kiểm tra xem x có trong dãy
umap<ll,ll>save; // kiểm tra xem đã tính số x chưa
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    for(ll i=1;i<=n;i++){cin>>a[i];cnt[a[i]]=true;}
    sort(a+1,a+n+1);
    ll res=0;
    for(ll i=1;i<=n;i++){
        if(a[i]==1){res++;continue;}
        if(a[i]>maxa[k]){break;}
        if(save[a[i]]==1){res++;continue;}
        if(save[a[i]]==-1){continue;}
        ll ch=true,og=a[i];
        for(ll e=2;e<=k;e++){
            a[i]*=og;
            if(!cnt[a[i]]){ // không là sdb
                ch=false,save[og]=-1;
                break;
            }
        }
        if(ch){save[og]=1,res++;}
    }
    cout<<res;
    // cerr<<res;
}

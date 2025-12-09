#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
#define ll long long
#define tname "robot"
//#define max(a,b) ((a)>(b)?(a):(b))
//#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=200005;
ll n,k,pos[maxN],a,b;
//struct node{ll val,laz=0;}st[maxN*4];
//void init(ll id,ll l,ll r){
//    if(l==r){st[id].val=pos[l];return;}
//    init(id<<1,l,m);init(id<<1|1,m+1,r);
//    st[id]=st[id<<1]+st[id<<1|1];
//}
//void upd(ll id,ll l,ll r,ll i,ll val){
//
//}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    // pos[i] = 1 => hs tin, pos[i] = 0 => hs toán
    for(ll i=1;i<=n;i++){pos[i]=1;}
    if(n<=1000&&k<=1000){ // sub 1 trâu như thường
        ll res=0;
        while(k--){
            res=0;
            cin>>a>>b;
            swap(pos[a],pos[b]);
            for(ll i=1;i<=n;i++){res+=pos[i];}
            cout<<res<<"\n";
        }
        return 0;
    }
    // sub 2 thuần if else LMAOOOO
    ll res=n;
    while(k--){
        cin>>a>>b;
        if((a>n&&b>n)||(a<=n&&b<=n)){
            // cùng trong nửa đầu/nửa cuối -> sum giữ nguyên
            swap(pos[a],pos[b]);
        }else if((a<=n&&b>n)||(a>n&&b<=n)){
            if(pos[a]==pos[b]){
                // đều là 0-0 hoặc 1-1 -> sum giữ nguyên
                swap(pos[a],pos[b]);
            }else{
                ll outbound=min(a,b); // chọn index <= n
                if(pos[outbound]){
                    res--; // mất 1 hs tin
                }else{
                    res++; // thêm 1 hs tin
                }
                swap(pos[a],pos[b]);
            }
        }
        cout<<res<<"\n";
    }
}


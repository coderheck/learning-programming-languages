#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=500005;
struct segtree{
    ll n;vector<ll>st;
    segtree(ll n):n(n),st(4*n+5,0){}
    void upd(ll id,ll l,ll r,ll pos,ll val){
        if(l==r){st[id]=max(st[id],val);return;}
        ll m=l+r>>1;
        if(pos<=m){
            upd(id<<1,l,m,pos,val);
        }else{
            upd(id<<1|1,m+1,r,pos,val);
        }
        st[id]=max(st[id<<1],st[id<<1|1]);
    }
    ll ask(ll id,ll l,ll r,ll u,ll v){
        if(u>r||v<l){return 0;}
        if(u<=l&&v>=r){return st[id];}
        ll m=l+r>>1;
        return max(ask(id<<1,l,m,u,v),ask(id<<1|1,m+1,r,u,v));
    }
};
ll n,k,a[maxN],b[maxN],res=0;
// void upd(ll i,ll v){
//     for(;i<=n*k;i+=i&-i){bit[i]=max(bit[i],v);}
// }
// ll ask(ll i){
//     ll res=0;
//     for(;i>0;i-=i&-i){res=max(res,bit[i]);}
//     return res;
// }
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    segtree st(n*k);
    vector<vector<ll>>pa(n+5),pb(n+5);
    vector<ll>cnt(n+5,0),merge;
    for(ll i=1;i<=n*k;i++){cin>>a[i];pa[a[i]].push_back(i);}
    for(ll i=1;i<=n*k;i++){cin>>b[i];}
    for(ll i=1;i<=n*k;i++){
        for(int j=k-1; j>=0; j--){
            int tmp=st.ask(1, 1, n*k, 1, pa[b[i]][j]-1)+1;
            res=max(tmp, res);
            st.upd(1, 1, n*k, pa[b[i]][j], tmp);
        }
    }
            
    cout<<res;
}

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// #define ll long long 
// #define max(a,b) ((a)>(b)?(a):(b))
// const ll maxN=500005;
// ll n,k,a[maxN],b[maxN],bit[maxN],res=0;
// void upd(ll i,ll v){
//     for(;i<=n*k;i+=i&-i){bit[i]=max(bit[i],v);}
// }
// ll ask(ll i){
//     ll res=0;
//     for(;i>0;i-=i&-i){res=max(res,bit[i]);}
//     return res;
// }
// int main(){
//     cin.tie(0)->sync_with_stdio(0);
//     cin>>n>>k;
//     // segtree st(n*k);
//     vector<vector<ll>>pa(n+5),pb(n+5);
//     vector<ll>cnt(n+5,0),merge;
//     for(ll i=1;i<=n*k;i++){cin>>a[i];pa[a[i]].push_back(i);}
//     for(ll i=1;i<=n*k;i++){cin>>b[i];}
//     for(ll i=1;i<=n*k;i++){
//         for(int j=k-1; j>=0; j--){
//             int tmp=ask(pa[b[i]][j]-1);
//             res=max(tmp, res);
//             upd(tmp,);
//         }
//     }
//             
//     cout<<res;
// }


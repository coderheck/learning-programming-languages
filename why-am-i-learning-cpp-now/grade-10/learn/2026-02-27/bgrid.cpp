#include <iostream>
using namespace std;
#define ll long long
#define tname "bgrid"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define getbit(x,k) ((x)>>(k))&1
const ll maxN=200005;
ll n,P,Q,x,y,t,w[maxN];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>P;
    for(ll i=1;i<=P;i++){
        cin>>t>>w[i];
        if(t==2){w[i]*=-1;}
    }
    cin>>Q;
    // cerr<<"p: "<<P<<"\nq: "<<Q<<"\nt[P]: "<<t[P]<<"\nw[P]: "<<w[P]<<"\n";
    // if(n<=200){
    //     vector<vector<ll>>g(n+5,vector<ll>(n+5,0));
    //     for(ll q=1;q<=P;q++){
    //         if(w[q]>=0){ // t=1
    //             for(ll i=1;i<=w[q];i++){
    //                 for(ll j=1;j<=w[q];j++){g[i][j]=!g[i][j];}
    //             }
    //         }else{ // t=2
    //             w[q]*=-1;
    //             for(ll i=w[q];i<=n;i++){
    //                 for(ll j=w[q];j<=n;j++){g[i][j]=!g[i][j];}
    //             }
    //         }
    //         // for(ll i=1;i<=n;i++){
    //         //     for(ll j=1;j<=n;j++){cerr<<g[i][j]<<" ";}
    //         //     cerr<<"\n";
    //         // }
    //         // cerr<<"\n";
    //     }
    //     for(ll q=1;q<=Q;q++){
    //         cin>>x>>y;
    //         // cerr<<x<<" "<<y<<": ";
    //         lout(g[x][y]);
    //     }
    // }
    for(ll q=1;q<=Q;q++){
        ll state=0;
        cin>>x>>y;
        for(ll p=1;p<=P;p++){
            if(w[p]>0){ // t=1
                if(x<=w[p]&&y<=w[p]){state=!state;}
            }else{ // t=2
                w[p]*=-1;
                if(x>=w[p]&&y>=w[p]){state=!state;}
            }
        }
        lout(state);
    }
}

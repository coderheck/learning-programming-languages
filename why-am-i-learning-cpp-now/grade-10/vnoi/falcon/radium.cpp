#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define tname "radium"
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n";
ll n,m,Q,res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m>>Q;
    vector<vector<ll>>a(n+5,vector<ll>(m+5));
    vector<ll>maxr(n+5,-1),maxc(m+5,-1),posr(n+5),posc(n+5);
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]>maxr[i]){maxr[i]=a[i][j],posr[i]=j;}
            if(a[i][j]>maxc[j]){maxc[j]=a[i][j];posc[j]=i;}
        }
    }
    for(ll i=1;i<=n;i++){
        if(posc[posr[i]]==i){res++;}
    }
    for(ll q=1,r,c,x;q<=Q;q++){
        cin>>r>>c>>x;
        if(posr[r]==c&&posc[c]==r){res--;}
        a[r][c]=x;
        if(x>maxr[r]){maxr[r]=x,posr[r]=c;}
        if(x>maxc[c]){maxc[c]=x;posc[c]=r;}
        if(posr[r]==c&&posc[c]==r){res++;}
        lout((res-1));
    }
}

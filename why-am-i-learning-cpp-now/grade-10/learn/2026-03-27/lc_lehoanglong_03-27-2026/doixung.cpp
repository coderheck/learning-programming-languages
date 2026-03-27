#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define tname "doixung"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
//    cerr<<x<<"\n";
const ll maxN=1005,P=31,modN=1000000007;
string s;
ll n,h1[maxN],h2[maxN],p[maxN],res=0;
ll get1(const ll &l,const ll &r){
    return(h1[r]-h1[l-1]*p[r-l+1]%modN+modN)%modN;
}
ll get2(const ll &l,const ll &r){
    return(h2[l]-h2[r+1]*p[r-l+1]%modN+modN)%modN;
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>s;s="#"+s;
    p[0]=1,h1[0]=h2[n]=0;
    for(ll i=1;i<=n;i++){
        p[i]=(p[i-1]*P)%modN;
        h1[i]=(h1[i-1]*P+s[i]-'a')%modN;
    }
    for(ll i=n;i>=1;i--){
        h2[i]=(h2[i+1]*P+s[i]-'a')%modN;
    }
    for(ll l=1;l<=n;l++){
        for(ll r=l+1;r<=n;r++){
            if(get1(l,r)==get2(l,r)){res=max(res,r-l+1);}
        }
    }
    lout(res);
}

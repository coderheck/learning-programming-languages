#include <iostream>
#include <string>
using namespace std;
#define tname "strpalin"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n";
const ll maxN=1000005,P=31,modN=1000000007;
ll n,Q,res=0,h1[maxN],h2[maxN],p[maxN],l,r;
string s;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>s>>Q;n=s.size(),s="#"+s;
    h1[0]=h2[n]=0,p[0]=1;
    for(ll i=1;i<=n;i++){p[i]=(p[i-1]*P)%modN;}
	for(ll i=1;i<=n;i++){h1[i]=(h1[i-1]*P+s[i])%modN;}
	for(ll i=n;i>=1;i--){h2[i]=(h2[i+1]*P+s[i])%modN;}
    for(ll q=1,l,r;q<=Q;q++){
        cin>>l>>r;
        lout(((h1[r]-h1[l-1]*p[r-l+1]%modN+modN)%modN == (h2[l]-h2[r+1]*p[r-l+1]%modN+modN)%modN ? "1" : "-1"));
    }
}

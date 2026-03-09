#include <iostream>
#include <string>
using namespace std;
#define tname "substr"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<" "; \
    cerr<<x<<" ";
const ll maxN=1000005,P=31,modN=1000000007;
ll n,k,res=0,h1[maxN],h2,p[maxN],l,r;
string s,q;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>s>>q;n=s.size(),k=q.size(),s="#"+s,q="#"+q;
    h1[0]=0,p[0]=1,h2=0;
    for(ll i=1;i<=n;i++){
        p[i]=(p[i-1]*P)%modN;
        h1[i]=(h1[i-1]*P+s[i]-'a')%modN;
    }
    for(ll i=1;i<=k;i++){
        h2=(h2*P+q[i]-'a')%modN;
    }
    for(ll i=1;i<=n-k+1;i++){
        l=i,r=l+k-1;
        if((h1[r]-h1[l-1]*p[r-l+1]%modN+modN)%modN==h2){lout(i);}
    }
}

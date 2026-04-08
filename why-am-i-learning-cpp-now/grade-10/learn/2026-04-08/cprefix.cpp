#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
using namespace std;
#define tname "cprefix"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" "
// const ll inff=1LL<<62;
vector<ll> pref(const string &s){
    ll n=s.size();
    vector<ll>p(n+5);
    p[0]=0;
    for(ll i=1,j;i<n;i++){
        j=p[i-1];
        while(j>0&&s[i]!=s[j]){j=p[j-1];}
        if(s[i]==s[j]){j++;}
        p[i]=j;
    }
    return p;
}
string s;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>s;
    size_t n=s.size();
    vector<ll>p=pref(s),res(n,1);
    for(size_t i=n-1;i>0;i--){
        if(p[i]){res[p[i]-1]+=res[i];}
    }
    for(size_t i=0;i<n;i++){oout(res[i]);}
}

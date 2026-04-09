#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
using namespace std;
#define tname "hp_thpt_22_a"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" "
// const ll inff=1LL<<62;
vector<ll> pref(const string &s){
    size_t n=s.size();
    vector<ll>p(n+5,0);
    for(size_t i=1,j;i<n;i++){
        j=p[i-1];
        while(j>0&&s[i]!=s[j]){j=p[j-1];}
        if(s[i]==s[j]){j++;}
        p[i]=j;
    }
    return p;
}
ll Q;
string s,t;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>t;
    s="virus";
    size_t n=s.size(),m=t.size(),j=0;
    ll res=0;
    vector<ll>p=pref(s);
    for(size_t i=0;i<m;i++){
        while(j>0&&t[i]!=s[j]){j=p[j-1];}
        if(t[i]==s[j]){j++;}
        if(j==n){res++;}
    }
    lout(res);
}

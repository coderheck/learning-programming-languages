#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
using namespace std;
#define tname "1255"
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
string a,b;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>Q;
    for(ll q=1;q<=Q;q++){
        cin>>a>>b;
        size_t n=a.size(),m=b.size(),j=0;
        ll res=0;
        vector<ll>p=pref(a);
        for(size_t i=0;i<n;i++){
            while(j>0&&a[i]!=b[j]){j=p[j-1];}
            if(a[i]==b[j]){j++;}
            if(j==m){res++,j=p[j-1];}
        }
        lout("Case "<<q<<": "<<res);
    }
}

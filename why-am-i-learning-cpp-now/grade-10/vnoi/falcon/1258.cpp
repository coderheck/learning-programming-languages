#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define tname "1258"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" "
// const ll inff=1LL<<62;
vector<ll> pref(const string &s){
    ll n=s.size();
    vector<ll>p(n,0);
    for(ll i=1,j;i<n;i++){
        j=p[i-1];
        while(j>0&&s[i]!=s[j]){j=p[j-1];}
        if(s[i]==s[j]){j++;}
        p[i]=j;
    }
    return p;
}
ll Q;
string s,r;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>Q;
    for(ll q=1,len;q<=Q;q++){
        cin>>s;r=s;
        reverse(r.begin(),r.end());
        len=pref(r+"^"+s).back(); // độ dài palindrome dài nhất ở đầu xâu s
        lout("Case "<<q<<": "<<s.size()*2-len);
    }
}

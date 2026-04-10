#include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define tname "substrg"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" "
// const ll inff=1LL<<62;
vector<ll> pp(const string &s){
    ll n=s.size();
    umap<char,ll>lst;
    vector<ll>p(n);
    for(ll i=0;i<n;i++){
        p[i]=lst[s[i]]?i-lst[s[i]]+1:0;
        lst[s[i]]=i+1;
    }
    return p;
}
vector<ll> make(const vector<ll> &prev){
    ll m=prev.size();
    vector<ll>pi(m,0);
    for(ll i=1,j=0,val;i<m;i++){
        val=prev[i]>0&&prev[i]<=j?prev[i]:0;
        while(j>0&&val!=prev[j]){
            j=pi[j-1];
            val=prev[i]>0&&prev[i]<=j?prev[i]:0;
        }
        if(val==prev[j]){j++;}
        pi[i]=j;
    }
    return pi;
}
string t,p;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>t>>p;
    ll n=t.size(),m=p.size();
    vector<ll>prev=pp(p),pi=make(prev),ans;
    umap<char,ll>lst;
    for(ll i=0,j=0,d,ee;i<n;i++){
        d=lst[t[i]]?i-lst[t[i]]+1:0;
        lst[t[i]]=i+1;
        ee=d>0&&d<=j?d:0;
        while(j>0&&ee!=prev[j]){
            j=pi[j-1],ee=(d>0&&d<=j)?d:0;
        }
        if(ee==prev[j]){j++;}
        if(j==m){
            ans.push_back(i-m+2);
            j=pi[j-1];
        }
    }
    lout(ans.size());
    for(const ll &x:ans){oout(x);}
}

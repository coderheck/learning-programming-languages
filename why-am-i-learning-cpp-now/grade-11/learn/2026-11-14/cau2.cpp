#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
#define tname "cau2"
#define ll long long
#define umap unordered_map
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=200005,inff=1ll<<62;
ll n,k;string s;
bool sexy(const ll &m){
    ll c=0;
    umap<char,ll>cnt;
    for(ll i=1;i<=m;i++){
        if(cnt[s[i]]<1){c++;cnt[s[i]]++;}
        if(c>=k){return true;}
    }
    ll l=1;
    for(ll r=l+1;r<=n;r++){
        if(cnt[s[l]]>=1){
            cnt[s[l]]--;
            if(cnt[s[l]]==0){c--;}
        }
        l++;
        if(cnt[s[r]]==0){c++;cnt[s[r]]++;}
        if(c>=k){return true;}
    }
    return false;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;cin>>s;
    s="%"+s;
    ll l=1,r=n,m,res=inff;
    while(l<=r){
        m=(l+r)>>1;
        if(sexy(m)){
            res=m;r=m-1;
        }else{l=m+1;}
    }
    if(res==inff){lout("-1");return 0;}
    lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

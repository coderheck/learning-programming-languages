#include <iostream>
#include <vector>
using namespace std;
#define tname "chondoi"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
ll n;
string s;
vector<int>ss={'H','S','G','P','T'};
ll cnt[128];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>s;
		if(s[0]=='H'||s[0]=='S'||s[0]=='G'||s[0]=='P'||s[0]=='T'){
			cnt[int(s[0])]++;
		}
	}
	ll res=0;
	for(ll i=0;i<(ll)ss.size();i++){
		for(ll j=i+1;j<(ll)ss.size();j++){
			for(ll k=j+1;k<(ll)ss.size();k++){
				res+=cnt[ss[i]]*cnt[ss[j]]*cnt[ss[k]];
			}
		}
	}
	lout(res);
}
//     yo = gurt
//   your = mom
//    seg = tree
//   code = blocks
// status = AC

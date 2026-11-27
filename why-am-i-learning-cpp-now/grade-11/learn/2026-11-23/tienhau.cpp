#include <algorithm>
#include <iostream>
using namespace std;
#define tname "tienhau"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
string s1,s2;
ll n,pre,suf,nn;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>s1;
	pre=suf=nn=s1.size();
	for(ll i=2;i<=n;i++){
		cin>>s2;
		ll len=s2.size(),lim=min(pre,len),j=0; // tiền tố
		while(j<lim && s1[j]==s2[j]){j++;}
		pre=j;
		lim=min(suf,len), j=0; // hậu tố
		while(j<lim && s1[nn-1-j]==s2[len-1-j]){j++;}
		suf=j;
	}
	lout(pre<<" "<<suf);
}
//     yo = gurt
//   your = mom
//    seg = tree
//   code = blocks
// status = AC

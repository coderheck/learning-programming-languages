#include <iostream>
#include <cstdlib>
#include <iterator>
#include <set>
using namespace std;
#define tname "thaotac"
#define ll long long
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=200005,inff=1ll<<60;
multiset<ll>ms;
ll n,res=0,p[maxn];
char t;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1,a;i<=n;i++){
		cin>>t>>a;
		if(t=='+'){ms.insert(a);}
		if(t=='-'){
			auto it=ms.find(a);
			if(it!=ms.end()){ms.erase(it);}
		}
		if(t=='?'){
			if(ms.empty()){lout("EMPTY");continue;}
			auto it=ms.lower_bound(a);
			ll d=inff,res=*ms.begin();
			if(it!=ms.end()){
				d=abs(*it-a);
				res=*it;
			}
			if(it!=ms.begin()){
				auto pit=prev(it);
				if(abs(*pit-a)<=d){res=*pit;}
			}
			lout(res);
		}
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

#include <iostream>
#include <iterator>
#include <set>
using namespace std;
#define tname "trungvi"
#define ll long long
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=200005,inff=1ll<<60;
multiset<ll>lt,rt;
ll n,k,a[maxn];
void bal(){
	while(lt.size()<rt.size()){
		auto it=rt.begin();
		lt.insert(*it);
		rt.erase(it);
	}
	while(lt.size()>rt.size()+1){
		auto it=prev(lt.end());
		rt.insert(*it);
		lt.erase(it);
	}
}
void add(const ll &x){
	if(lt.empty() or x<=*lt.rbegin()){
		lt.insert(x);
	}else{
		rt.insert(x);
	}
	bal();
}
void rem(const ll &y){
	auto it=lt.find(y);
	if(it!=lt.end()){
		lt.erase(it);
	}else{
		it=rt.find(y);
		if(it!=rt.end()){rt.erase(it);}
	}
	bal();
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=k;i++){add(a[i]);}
	oout(*lt.rbegin());
	for(ll i=k+1;i<=n;i++){
		add(a[i]);
		rem(a[i-k]);
		oout(*lt.rbegin());
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

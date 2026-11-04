#include <iostream>
#include <vector>
using namespace std;
#define tname "qua"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=300005,inff=1ll<<62;
ll n,res=0;
vector<ll>ress;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	vector<ll>p(maxn,0);
	for(ll i=1;i<=300000;i++){
		for(ll j=i;j<=300000;j+=i){p[j]+=i;}
	}
	cin>>n;
	for(ll i=1,a;i<=n;i++){
		cin>>a;
		if(p[a]-a==a){ress.push_back(a);}
	}
	lout(ress.size());
	if(not ress.size()){return 0;}
	for(const ll &x:ress){oout(x);}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

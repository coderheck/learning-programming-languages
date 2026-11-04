#include <iostream>
#include <deque>
using namespace std;
#define tname "gtln"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=200005;
ll n,k,a[maxn];
deque<ll>dq;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){
		if(dq.size() && dq.front()<=i-k){
			dq.pop_front();
		}
		while(dq.size() && a[dq.back()]<=a[i]){
			dq.pop_back();
		}
		dq.push_back(i);
		if(i>=k){oout(a[dq.front()]);}
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

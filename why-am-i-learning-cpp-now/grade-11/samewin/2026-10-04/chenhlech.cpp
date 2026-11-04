#include <iostream>
#include <deque>
using namespace std;
#define tname "chenhlech"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=200005;
ll n,k,a[maxn];
deque<ll>maxx,minn;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){
		// maxx deque
		if(maxx.size() && maxx.front()<=i-k){
			maxx.pop_front();
		}
		while(maxx.size() and a[maxx.back()]<=a[i]){
			maxx.pop_back();
		}
		maxx.push_back(i);

		// minn deque
		if(minn.size() && minn.front()<=i-k){
			minn.pop_front();
		}
		while(minn.size() and a[minn.back()]>=a[i]){
			minn.pop_back();
		}
		minn.push_back(i);


		if(i>=k){oout(a[maxx.front()] - a[minn.front()]);}
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

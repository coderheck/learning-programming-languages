#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
#define tname "hieumaxmin"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=200005;
ll n,k,a[maxn],ans=-1;
deque<ll>maxx,minn;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll l=1,r=1;r<=n;r++){
		while(maxx.size() and a[maxx.back()]<=a[r]){maxx.pop_back();}
		maxx.push_back(r);
		while(minn.size() and a[minn.back()]>=a[r]){minn.pop_back();}
		minn.push_back(r);

		if(a[maxx.front()] - a[minn.front()] > k){
			if(maxx.front()==l){maxx.pop_front();}
			if(minn.front()==l){minn.pop_front();}
			l++;
		}

		ans=max(ans,r-l+1);
	}
	lout(ans);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

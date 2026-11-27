#include <iostream>
#include <deque>
using namespace std;
#define tname "ddbp"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=200005;
ll n,d,a[maxn],res=0;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>d;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	// monotonic deque
	deque<ll>dmax,dmin;
	ll l=1;
	for(ll r=1;r<=n;r++){
		while(dmax.size() && a[dmax.back()]<=a[r]){
			dmax.pop_back();
		}
		dmax.push_back(r);
		while(dmin.size() && a[dmin.back()]>=a[r]){
			dmin.pop_back();
		}
		dmin.push_back(r);

		while(a[dmax.front()]-a[dmin.front()]>d){
			l++;
			while(dmax.size() && dmax.front()<l){
				dmax.pop_front();
			}
			while(dmin.size() && dmin.front()<l){
				dmin.pop_front();
			}
		}
		res+=r-l+1;
	}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

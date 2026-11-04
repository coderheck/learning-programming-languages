#include <iostream>
#include <algorithm>
using namespace std;
#define tname "chonbi"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=10005;
ll n,m,res=0,resc=0;
struct gay{
	ll a,b;
	bool operator<(const gay &rhs)const{return b>rhs.b;}
}a[maxn];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=m;i++){cin>>a[i].a>>a[i].b;}
	sort(a+1,a+m+1);
	for(ll i=1;i<=m;i++){
		while(a[i].a-- && resc<n){res+=a[i].b, resc++;}
	}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC


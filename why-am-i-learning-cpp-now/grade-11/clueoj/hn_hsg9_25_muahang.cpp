#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
#define tname "hn_hsg9_25_muahang"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=100005;
struct quer{
	ll a,t,i;
	bool operator<(const quer &rhs)const{
		return a == rhs.a ? t < rhs.t : a < rhs.a;
	}
}a[maxn];
ll n,m;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){cin>>a[i].a;a[i].i=i;}
	for(ll i=1;i<=n;i++){cin>>a[i].t;}
	if(m==1){ // sub 1: chọn quầy hàng đầu tiên có t nhỏ nhất
		sort(a+1,a+n+1);
		lout(a[1].t);
	}else if(m==n){ // sub 2: m = n => cả dãy là một hoán vị
		sort(a+1,a+n+1);
		ll res=a[1].t;
		for(ll i=2;i<=n;i++){res+=a[i].t+abs(a[i].i - a[i-1].i);}
		lout(res);
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

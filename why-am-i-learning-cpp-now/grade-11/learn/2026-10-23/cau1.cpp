#include <iostream>
using namespace std;
#define tname "cau1"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
ll gcd(const ll &a,const ll &b){return b?gcd(b,a%b):a;}
ll x1,y1,x2,y2;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>x1>>y1>>x2>>y2;
	ll x3 = x1*y2, x4 = x2*y1, y = y1 * y2, x = x3 + x4;
	ll gc=gcd(x,y), n=x/gc, m=y/gc;
	if((n<0 and m<0) or (n>0 and m<0)){n*=-1,m*=-1;}
	lout(n<<" "<<m);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC


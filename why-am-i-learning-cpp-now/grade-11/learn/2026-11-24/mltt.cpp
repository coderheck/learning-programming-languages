#include <iostream>
#include <vector>
using namespace std;
#define tname "mltt"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=200005,inff=1ll<<62;
ll n,c[maxn];
struct edge{
	ll v,w;
	bool operator<(const edge &rhs)const{return w>rhs.w;}
};
vector<vector<edge>>g;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	
}
//     yo = gurt
//   your = mom
//    seg = tree
//   code = blocks
// status = AC

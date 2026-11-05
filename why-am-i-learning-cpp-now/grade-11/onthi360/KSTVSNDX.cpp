#include <iostream>
using namespace std;
#define tname "KSTVSNDX"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
ll rev(ll n){
	ll ret=0;
	while(n){ret=ret*10+n%10;n/=10;}
	return ret;
}
bool pr(const ll &n){
    if(n<2){return false;}
    if(n<=3){return true;}
    if(n%2==0||n%3==0){return false;}
    for(ll i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0){return false;}
    }
    return true;
}
void make(){
	
}
ll k,l,r;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	// sub 1: sang ngto 10^6
	// sub 2: check nto O(K * sqrt(10^9)) = O(10^3 * 10^3) = O(10^6)
	
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

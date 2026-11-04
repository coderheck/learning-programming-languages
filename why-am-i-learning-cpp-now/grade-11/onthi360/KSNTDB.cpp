#include <iostream>
using namespace std;
#define tname "KSNTDB"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
bool pr(const ll &n){
    if(n<2){return false;}
    if(n<=3){return true;}
    if(n%2==0||n%3==0){return false;}
    for(ll i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0){return false;}
    }
    return true;
}
ll res=0,n;
void dfs(ll cur){
    if(cur>n){return;}
    res++;
    int ds[]={1,3,7,9};
    for(int d:ds){
        ll nxt=cur*10+d;
        if(nxt<=n && pr(nxt)){dfs(nxt);}
    }
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
    int base[]={2,3,5,7};
    for(int p:base){
        if(p<=n){dfs(p);}
    }
    cout<<res;
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

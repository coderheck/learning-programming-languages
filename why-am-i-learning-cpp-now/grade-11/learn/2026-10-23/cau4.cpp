#include <iostream>
using namespace std;
#define tname "cau4"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
ll n,q;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	if(n==2){
		for(ll qq=1,t,c,x,y;qq<=q;qq++){
			cin>>t;
			if(t==1){cin>>c;lout("1 "<<c);}
			else{cin>>x>>y;lout(y);}
		}
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC


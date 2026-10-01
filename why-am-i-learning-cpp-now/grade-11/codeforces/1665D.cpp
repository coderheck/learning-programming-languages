#include <iostream>
using namespace std;
#define tname "1665d"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
// const ll maxN=200005,inff=1ll<<60;
ll t,x;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>t;
	while(t--){
		ll r=0;
		for(ll i=1;i<=30;i++){
			ll	t1=1ll<<(i-1),
				t2=1ll<<i,
				ans;
			cout<<"? "<<t1-r<<" "<<t2<<endl;
			cin>>ans;
			if(ans==t2){r+=t1;}
		}
		cout<<"! "<<r<<endl;
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

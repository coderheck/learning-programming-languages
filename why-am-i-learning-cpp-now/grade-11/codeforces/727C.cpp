#include <iostream>
using namespace std;
#define tname "727c"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxn=5005;
ll a[maxn],n,ij,solved=0;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	ll t1,t2,t3,t4;
	cout<<"? 1 2"<<endl;cin>>t1;
	cout<<"? 2 3"<<endl;cin>>t2;
	cout<<"? 1 3"<<endl;cin>>t3;
	// solve for x,y,z:
	// x + y = t1
	// y + z = t2
	// x + z = t3
	// 2x + 2y + 2z = t1 + t2 + t3 = t4
	// x + y + z = t4 / 2
	// z = t4 / 2 - t1
	// x = t3 - z
	// y = t2 - z
	t4=t1+t2+t3;
	a[3]=t4/2-t1; a[1]=t3-a[3]; a[2]=t2-a[3];
	solved=3;
	ll tt=0;
	while(solved<n){
		cout<<"? 1 "<<solved+1<<endl;
		cin>>tt;
		a[solved+1]=tt-a[1];
		solved++;
	}
	cout<<"! ";
	for(ll i=1;i<=n;i++){cout<<a[i]<<" ";}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

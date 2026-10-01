#include <iostream>
using namespace std;
#define tname "1999g2"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<60;
ll t,x,rep;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>t;
	while(t--){
		ll l=1,r=1000;
		while(r-l>2){
			ll m1=l+(r-l)/3,m2=r-(r-l)/3;
			cout<<"? "<<m1<<" "<<m2<<endl;
			cin>>rep;
			if(rep==-1){return 0;}
			// chat tam phan: m1 m2 
			// neu x o doan 3 => m1 * m2
			// neu x o doan 2 => m1 * (m2+1)
			// neu x o doan 1 => (m1+1) * (m2+1)
			if(rep==m1*m2){
				l=m2;
			}else if(rep==m1*(m2+1)){
				l=m1;r=m2;
			}else if(rep==(m1+1)*(m2+1)){
				r=m1;
			}
		}
		if(r-l==2){
			cout<<"? 1 "<<l+1<<endl;
			cin>>rep;
			if(rep==l+1){l+=1;}else{r=l+1;}
		}
		cout<<"! "<<r<<endl;
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

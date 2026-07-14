// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
#include <string>
using namespace std;
#define tname "interactive_guessarray"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
ll l=1,r=10000,m,n,k;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	r=n;
	string res;
	while(true){
		m=(l+r)>>1;
		cout<<m<<"\n"<<flush;
		cin>>res;
		if(res=="BIGGER"){
			l=m+1;
		}else if(res=="SMALLER"){
			r=m-1;
		}else{
			return 0;
		}
	}
}


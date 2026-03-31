#include <iostream>
using namespace std;
#define ll long long 
#define tname "cau1a"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
	cout<<x<<"\n"; \
	// cerr<<x<<"\n";
ll n;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin>>n;
	// case 1:
	lout(max(0,n-1));
	// case 2:
	ll res2=0;
	while(n){res2+=n>>=1;}
	lout(res2);
}

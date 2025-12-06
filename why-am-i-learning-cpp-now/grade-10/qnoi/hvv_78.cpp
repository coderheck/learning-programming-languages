// #include <iostream>
// using namespace std;
// #define ll long long 
// #define tname "hvv_78"
// const ll maxN=200005;
// ll n,x,y,res=0,a[maxN];
// int main() {
//     cin.tie(nullptr)->sync_with_stdio(0);
// 	cin>>n>>x>>y;
// 	for(ll i=0;i<n;i++){cin>>a[i];}
// 	ll i=0;
// 	while(i<n){
// 		if(a[i]<y||a[i]>x){i++;continue;}
// 		ll j=i;
// 		
// 	}
// 	cout<<res;
// }
#include <iostream>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=200005;
ll n,x,y,a[maxN],lstx=0,lsty=0,lstinvalid=0,res=0;
void unionize(const ll& a,const ll& b){}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>x>>y; // x = max; y = min 
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){
		if(a[i]==x){
			lstx=i;
		}else if(a[i]==y){
			lsty=i;
		}else if(a[i]<y||a[i]>x){
			lstinvalid=i;
		}
		res+=max(0,min(lstx,lsty)-lstinvalid);
	}
	cout<<res;
}


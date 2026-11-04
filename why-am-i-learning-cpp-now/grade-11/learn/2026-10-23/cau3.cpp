#include <iostream>
using namespace std;
#define tname "cau3"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=505;
ll max(const ll &a,const ll &b){return a>b?a:b;}
ll n,c[maxn],all=0,maxx=0;
void backt(const ll &i,const ll &s1,const ll &s2){ // sub 1
	if(i>n){
		if(s1==s2){maxx=max(maxx,s1);}
		return;
	}
	backt(i+1,s1,s2);
	backt(i+1,s1+c[i],s2);
	backt(i+1,s1,s2+c[i]);
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>c[i];all+=c[i];}
	backt(1,0,0);
	lout(all-maxx);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

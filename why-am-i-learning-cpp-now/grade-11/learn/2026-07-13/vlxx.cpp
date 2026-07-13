// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define tname "vlxx"
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
const ll maxN=200005,modN=1000000007,P=31;
ll T,n,m,res=0,p[maxN];
string s;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>T;
	p[0]=1;
    for(ll i=1;i<=200000;i++){
        p[i]=(p[i-1]*P)%modN;
    }
	while(T--){
		res=0;
		cin>>n>>m;
		vector<vector<ll>>h1(n+5,vector<ll>(m+5,0)),h2(n+5,vector<ll>(m+5,0));
		for(ll i=1;i<=n;i++){
			cin>>s;
			for(ll j=1;j<=m;j++){
				h1[i][j]=(h1[i][j-1]*P+s[j-1])%modN;
			}
			for(ll j=m;j>=1;j--){
				h2[i][j]=(h2[i][j+1]*P+s[j-1])%modN;
			}
		}
		for(ll i=1;i<=n;i++){
			for(ll j=i+1,s1,s2;j<=n;j++){
				// s1: duyệt đầu -> cuối, s2: duyệt cuối -> đầu
				s1=0,s2=0;
				for(ll k=1;k<=m;k++){
					if(h1[i][k]!=h1[j][k]){break;}else{s1++;}
				}
				for(ll k=m;k>=1;k--){
					if(h2[i][k]!=h2[j][k]){break;}else{s2++;}
				}
				if(s1+s2==m-1){res++;}
			}
		}
		lout(res);
	}
}

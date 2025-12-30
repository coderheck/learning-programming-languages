#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
#define ll long long 
#define tname "lightshow"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define debug(x) cout<<"debug: "<<(x)<<"\n";
#define umap unordered_map
const ll maxN=100005;
ll n,rc=0,bc=0,nc=0;string s;
umap<ll,ll>cnt;
void suball(){
	cnt[0]=1;
	ll res=0,cc=0;
	for(ll i=1;i<=n;i++){
		cc+=s[i]=='R',cc-=s[i]=='B';
		res+=cnt[cc]++;
	}
	cout<<res;
}
void sub1(){
	ll res=0,sum[maxN];
	for(ll i=1;i<=n;i++){sum[i]=sum[i-1]+(s[i]=='R'?1:-(s[i]=='B'));}
	for(ll l=1;l<=n;l++){
		for(ll r=l;r<=n;r++){
			res+=sum[r]-sum[l-1]==0;
		}
	}
	cout<<res;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>s;s="#"+s;
	if(n<=1000){
		sub1();
	}else{
		suball();return 0;
	}
}

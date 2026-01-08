#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
#define tname "diffsstr"
const ll maxN=105,modN=1000000007,P=31;
ll n,p[maxN],h1[maxN],h2[maxN];
string s;
bool check(const ll &len){
	umap<string,bool>cnt;
	for(ll l=0;l+len-1<n;l++){
		string tm=s.substr(l,len);
		if(cnt[tm]){return false;}
		cnt[tm]=true;
	}
	return true;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>s;
	ll l=1,r=n,m,res=n;
	while(l<=r){
		m=l+r>>1;
		if(check(m)){res=m,r=m-1;}else{l=m+1;}
	}
	cout<<res;
}

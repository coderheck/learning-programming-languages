#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
#define tname "dongbien"
#define ll long long
#define umap unordered_map
const ll maxn=200005;
string s;ll res=0;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin>>s;
	umap<char,ll>cnt;cnt.reserve(128);
	for(const char &c:s){
		res++;
		if(cnt.find(c)!=cnt.end()){res+=cnt[c];}
		cnt[c]++;
	}
	cout<<res;
}

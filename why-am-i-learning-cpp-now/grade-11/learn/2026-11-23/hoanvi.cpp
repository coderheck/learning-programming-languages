#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
#define tname "hoanvi"
#define ll long long 
#define umap unordered_map
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
string a,b;
umap<char,ll>cnta,cntb;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>a>>b;
	for(char &c:a){cnta[c]++;}
	for(char &c:b){cntb[c]++;}
	if(cnta.size()!=cntb.size()){
		lout("NO");
	}
	bool diff=false;
	char fst='#';
	for(umap<char,ll>::iterator i=cnta.begin();i!=cnta.end();i++){
		if(i->second!=cntb[i->first]){diff=true;}
		if(i->second==1){fst=i->first;}
	}
	if(diff){lout("NO");}else{lout("YES");}
	if(fst=='#'){lout("-1");}else{
		lout(a.find(fst)+1);
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

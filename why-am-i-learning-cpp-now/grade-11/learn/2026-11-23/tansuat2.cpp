#include <iostream>
#include <cctype>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
#define tname "tansuat2"
#define ll long long 
#define umap unordered_map
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
string s,res="";
umap<char,ll>cnt;
ll maxc=-1,resc=-1;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>s;
	for(const char &c:s){
		if(isdigit(c)){continue;}
		cnt[tolower(c)]++;
	}
	for(auto it:cnt){
		if(it.second>maxc){
			resc=maxc;
			maxc=it.second;
		}else if(it.second>resc){
			resc=it.second;
		}
	}
	// if(maxc==-1||resc==-1){lout("NONE");return 0;}
	for(auto it:cnt){
		if(it.second==resc){res+=char(it.first);}
	}
	sort(res.begin(),res.end());
	if(res.size()){
		lout(res[0]);
		// lout(res);
	}else{lout("NONE");}
}
//     yo = gurt
//   your = mom
//    seg = tree
//   code = blocks
// status = AC

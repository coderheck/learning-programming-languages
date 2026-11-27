#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define tname "tuanhoan"
#define ll long long 
#define lout(x) \
	cout<<x<<"\n";\
	// cerr<<x<<"\n";
#define oout(x) \
	cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
string s,man="";int n,i=0;
bool check(const string &st){
	string tmp;
	while(tmp.size()<s.size()){tmp+=st;}
	return(tmp==s);
}
void sub1(){
	while(i<n){
		man.push_back(s[i]);
		if(check(man)){
			lout(man.size());
			// lout(man);
			return;
		}
		i++;
	}
}
void sub2(){
	// duyệt ước của độ dài xâu S
	vector<ll>divs;
	for(ll i=1;i*i<=n;i++){
		if(n%i==0){
			divs.push_back(i);
			ll j=n/i;
			if(j!=i){divs.push_back(j);}
		}
	}
	sort(divs.begin(),divs.end());
	for(ll len:divs){
		string st=s.substr(0,len),tmp=st;
		while(tmp.size()<s.size()){tmp+=st;}
		if(tmp==s){
			lout(st.size());
			// lout(st);
			return;
		}else{continue;}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>s;
	n=s.size();
	sub2();
}
//     yo = gurt
//   your = mom
//    seg = tree
//   code = blocks
// status = AC

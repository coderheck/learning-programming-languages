#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long 
const ll maxN=100000000;
ll m,k;string tr;
vector<string>res;
string tostr(ll x){
	string res="";
	while(x){res=(char)(x%10+'0')+res;x/=10;}
	return res;
}
bool f(ll& i){return(res[i]==tr);}
void sol(){
	for(ll i=1;i<=maxN;i++){
		res.push_back(tostr(i));
		if((ll)res.size()<m){continue;}
		sort(res.begin(),res.end());
		if(res[m-1]==tr){cout<<i;break;}
	}
	// cout<<"\n";
	// for(string& s:res){cout<<s<<" ";}
}
void solve(){
	
}
int main(){
	if(fopen("amusing.inp","r")){
		freopen("amusing.inp","r",stdin);
		freopen("amusing.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>m>>k;tr=tostr(k);
	// if(m<10000&&k<10000){
		sol();
	// }
}

// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
using namespace std;
#define tname "a"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=16,inff=1LL<<62;
vector<string>board(8);
ll n=8,res=0;
bool check(const vector<int>&a){
	vector<vector<bool>>b(8,vector<bool>(8,false));
	for(ll i=0;i<n;i++){
		b[i][a[i]]=true;
		if(b[i][a[i]] && board[i][a[i]] == '*'){return false;}
	}
	for(ll i=0;i<n;i++){
		for(ll j=i+1;j<n;j++){
			if(abs(i-j)==abs(a[i]-a[j])){return false;}
		}
	}
	return true;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	for(ll i=0;i<8;i++){cin>>board[i];}
	vector<int>a(8);
	iota(a.begin(),a.end(),0);
	do{
		res+=check(a);
	}while(next_permutation(a.begin(),a.end()));
	lout(res);
}


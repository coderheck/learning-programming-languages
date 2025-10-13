#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;
#define ll long long
#define umap unordered_map
#define st first 
#define nd second 
const ll maxN=200005;
ll n,res=0;string s;
umap<ll,vector<pair<ll,char>>>vert;
vector<pair<ll,ll>>a(maxN);
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i].st>>a[i].nd;}
	cin>>s;
	for(ll i=0;i<n;i++){vert[a[i].nd].push_back({a[i].st,s[i]});}
	for(auto&[y,v]:vert){
		vector<ll>l,r;
		for(auto&[x,d]:v){(d=='L'?l:r).push_back(x);}
		sort(l.begin(),l.end());sort(r.begin(),r.end());
		for(ll i=0,j=0;i<r.size()&&j<l.size();){r[i]<l[j]?res+=(l.size()-j)*3,i++:j++;}
	}
	cout<<res;
}

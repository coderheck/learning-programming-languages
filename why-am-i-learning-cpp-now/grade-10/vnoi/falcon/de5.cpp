#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
ll n,a,res=0;umap<ll,ll>cnt;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	while(n--){cin>>a;cnt[a]++;}
	for(umap<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){res+=i->second/2;}
	cout<<res;
}

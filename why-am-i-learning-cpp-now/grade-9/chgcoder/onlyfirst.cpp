#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
struct chrcnt{char c;ll pos;};
ll t;string s;umap<char,ll>cnt;
int main(){
	cin.tie(0);ios::sync_with_stdio(0);
	cin>>t;
	cnt.reserve(260);
	while(t--){
		cnt.clear();
		chrcnt chr[260];ll c=0,f=0;
		cin>>s;
		for(ll i=0;i<s.size();i++){
			if(!cnt[s[i]]){
				chr[c].c=s[i];chr[c].pos=i+1;
				c++;
			}
			cnt[s[i]]++;
		}
		for(ll i=0;i<c;i++){
			if(cnt[chr[i].c]==1){cout<<chr[i].pos<<"\n";f=1;break;}
		}
		if(!f) cout<<"-1\n";
	}
}

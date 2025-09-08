#include <iostream>
#include <string>
using namespace std;
#define ll long long 
const ll modN=1000000007;
const ll maxN=1000005;
ll maxsz=0,hsh1[maxN],h2=0,p[maxN];
string s,a;
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	p[0]=1,hsh1[0]=0;
	cin>>s>>a;
	s="#"+s;a="#"+a;
	for(ll i=1;i<s.size();i++){p[i]=(p[i-1]*31)%modN;}
	for(ll i=1;i<s.size();i++){
		hsh1[i]=(hsh1[i-1]*31+s[i]-'a')%modN;
	}
	for(ll i=1;i<a.size();i++){
		h2=(h2*31+a[i]-'a')%modN;
	}
	for(ll l=1,r=a.size()-1;r<s.size();l++,r++){
		ll h1=(hsh1[r]-hsh1[l-1]*p[r-l+1]+modN*modN)%modN;
		if(h1==h2){cout<<l<<" ";}
	}
}

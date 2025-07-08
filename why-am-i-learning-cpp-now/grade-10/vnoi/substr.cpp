#include<iostream>
#include<string>
using namespace std;
#define ll long long
string s,a;ll n1,n2;
void checkPattern(const ll& p){
	ll j=0;
	for(ll i=p;i<n1;i++){
		if(j>=n2){break;}
		if(s[i]!=a[j]){return;}
		j++;
	}
	cout<<p+1<<" ";
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>s>>a;
	n1=s.size(),n2=a.size();
	for(ll i=0;i<n1-n2+1;i++){checkPattern(i);}
}

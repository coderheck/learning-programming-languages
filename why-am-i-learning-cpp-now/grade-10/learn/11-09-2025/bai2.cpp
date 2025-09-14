#include <iostream>
#include <string>
using namespace std;
#define ll long long 
#define min(a,b) ((a)<(b)?(a):(b))
string s,a;ll k;
void foreplay(){
	char mi='9'+1;
	for(ll i=0;i<a.size()-1-k;i++){mi=min(mi,a[i]);}
	cout<<mi;
}
void hardcore(){
	for(ll l=a.size()-1-k;l<a.size();l++){
		for(ll i=a.size()-1-k;i++){}
	}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>k>>s;
	for(ll i=0;i<s.size();i++){if(s[i]>='0'&&s[i]<='9'){a.push_back(s[i]);}}
	while(a[0]=='0'){a.erase(0,1);}
	cout<<a<<" ";
	foreplay();
}

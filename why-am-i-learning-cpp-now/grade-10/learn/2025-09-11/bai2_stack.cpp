#include <iostream>
#include <string>
#include <stack>
using namespace std;
#define ll long long 
#define min(a,b) ((a)<(b)?(a):(b))
string s,a;ll k;stack<ll>res;
void stacking(){
	for(ll i=0;i<a.size();i++){}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>k>>s;
	for(ll i=0;i<s.size();i++){if(s[i]>='0'&&s[i]<='9'){a+=s[i];}}
	while(a[0]=='0'){a.erase(0,1);}
	cout<<a;
}


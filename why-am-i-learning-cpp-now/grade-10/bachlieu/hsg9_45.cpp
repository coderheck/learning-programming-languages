#include<iostream>
#include<string>
#define ll long long 
using namespace std;
string s;
int main(){
	getline(cin,s);
	for(ll i=0;i<s.size();i++){if(s[i]>='a'&&s[i]<='z'){s[i]-='a'-'A';}}
	cout<<s;
}

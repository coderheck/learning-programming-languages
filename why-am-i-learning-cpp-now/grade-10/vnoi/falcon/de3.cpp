#include<iostream>
#include<string>
using namespace std;
#define ll long long
string s;ll t=0;
int main(){
	cin>>s;
	for(ll i=0;i<=s.size();i++){
		if(s[i]>='0'&&s[i]<='9'){t+=s[i]-'0';}
	}
	if(t&1){cout<<"Odd"<<t;}else{cout<<"Even"<<t;}
}

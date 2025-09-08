#include <iostream>
#include <string>
#include <stack>
using namespace std;
#define ll long long
string s;
stack<char>p;
int main(){
	cin>>s;
	for(ll i=0;i<s.size();i++){
		if(s[i]==')'){
			if(p.top()!='('){cout<<"KHONG DUNG";return 0;}
			p.pop();
		}else if(s[i]=='('){
			p.push(s[i]);
		}else{
			cout<<"KHONG HOP LE";
			return 0;
		}
	}
	if(p.size()){cout<<"KHONG DUNG";}else{cout<<"DUNG";}
}

#include<iostream>
#include<string>
using namespace std;
#define ll long long
ll n,a=0,d=0;string k;
int main(){
	cin.tie(0);ios::sync_with_stdio(0);
	cin>>n;
	while(n--){
		cin>>k;
		while(k[0]=='0'){k.erase(0,1);}
		if(k[0]=='-'){a++;}
		else if(k[0]!='0'&&k.size()>0){d++;}
	}
	cout<<a<<" "<<d;
}

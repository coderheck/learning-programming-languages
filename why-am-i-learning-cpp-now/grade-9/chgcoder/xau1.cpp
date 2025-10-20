#include<iostream>
#include<string>
using namespace std;
#define ll unsigned long long
ll n,c=1;string s;
int main(){
	cin>>n;
	while(s.size()<=1000000){
		s+=to_string(c);c++;
	}
	cout<<s[n+1];
}

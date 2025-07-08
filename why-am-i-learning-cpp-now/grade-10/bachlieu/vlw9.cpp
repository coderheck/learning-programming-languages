#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int n;string res="";
int main(){
	cin>>n;
	while(n!=0){
		res+=(char)(n&1)+'0';
		n>>=1;
	}
	reverse(res.begin(),res.end());
	cout<<res;
}

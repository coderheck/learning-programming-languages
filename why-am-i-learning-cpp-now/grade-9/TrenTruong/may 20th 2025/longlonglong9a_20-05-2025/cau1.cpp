#include<iostream>
using namespace std;
#define ll long long
ll n,c=0,i=5;
int main(){
	cin>>n;
	while(i<=n){
		c+=n/i;
		i*=5;
	}
	cout<<c;
}

#include<iostream>
using namespace std;
#define ll long long
ll n,m,k,base,decr;
int main(){
	cin>>n>>m>>k;
	base=n*m;
	if(n>=k){
		decr=((ll)m*4/5)*n;
	}else{
		decr=((ll)m*4/5)*k;
	}
	if(decr<base){cout<<decr;}else{cout<<base;}
}
// I FUCKING HATE MATHS

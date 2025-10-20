#include<iostream>
#define ll long long 
using namespace std;
ll gcd(const ll& a,const ll& b){return(!b)?a:gcd(b,a%b);}
ll lcm(const ll& a,const ll& b){return(a/gcd(a,b))*b;}
ll m,n,x,y,gc;
int main(){
	cin>>m>>n>>x>>y;
	gc=lcm(x,y);
	cout<<n/gc-(m-1)/gc;
}

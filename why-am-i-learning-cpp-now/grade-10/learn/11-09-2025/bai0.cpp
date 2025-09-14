#include <iostream>
using namespace std;
#define ll long long 
const ll maxN=100005;
ll gcd(const ll& a,const ll& b){return(!b)?a:gcd(b,a%b);}
ll n,k,a,gc=1;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=0;i<n;i++){cin>>a;gc=(i)?gcd(gc,a):a;}
	cout<<(gc%k+k)%k;
}

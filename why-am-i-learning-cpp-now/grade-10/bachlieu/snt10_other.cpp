#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MAXN=1000000;
#define ll long long 
long long n;
vector<long long> lpf(MAXN+5,0);
vector<long long> a(MAXN+5,0);
bool pr[MAXN+5];
void Lp(){
	pr[0]=pr[1]=true;
	for(ll i=1;i<=MAXN;i++){lpf[i]=i;}
	for(ll i=2;i<=MAXN;i++){
		if(!pr[i]){
			lpf[i]=i;
			for(ll j=i*2;j<=MAXN;j+=i){
				pr[j]=true;
				lpf[j]=i;
			}
		}
	}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	Lp();
	for(long long i = 1; i <= n; i++){cin>>a[i];}
	for(long long i = 1; i <= n; i++){
		cout << lpf[a[i]] << "\n";
	}
}
    

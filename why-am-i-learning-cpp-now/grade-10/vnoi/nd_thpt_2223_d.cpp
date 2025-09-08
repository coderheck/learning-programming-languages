#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
const ll maxP=100005;
ll n,a;
vector<ll>res(maxP);
vector<bool>pr(maxP+5,false);
void prSieve(){
	pr[0]=pr[1]=true;
	for(ll i=2;i<=maxP;i++){
		if(!pr[i]){
			res.push_back(i*i);
			for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
		}
	}
}
int main(){
	freopen("sdb.inp","r",stdin);
	freopen("sdb.out","w",stdout);
	cin.tie(nullptr)->sync_with_stdio(0);
	prSieve();
	cin>>n;
	while(n--){
		cin>>a;
		cout<<*lower_bound(res.begin(),res.end(),a)<<" ";
	}
}

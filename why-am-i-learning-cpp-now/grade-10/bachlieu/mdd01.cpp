#include<iostream>
#include<map>
using namespace std;
#define ll long long 
ll n,a;map<ll,ll>cnt;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	while(n--){cin>>a;cnt[a]++;}
	for(map<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){cout<<i->first<<" "<<i->second<<"\n";}
}

#include <iostream>
#include <deque>
using namespace std;
#define ll long long 
ll n,k,a[1000005];
deque<ll>dq;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=0;i<n;i++){cin>>a[i];}
	for(ll i=0;i<n;i++){
		while(!dq.empty()&&dq.front()<=i-k){dq.pop_front();}
		while(!dq.empty()&&a[dq.back()]>=a[i]){dq.pop_back();}
		dq.push_back(i);
		if(i>=k-1){cout<<a[dq.front()]<<" ";}
	}
}

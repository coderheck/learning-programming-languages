#include <iostream>
#include <deque>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=100005;
ll n,l,r,res=0,s[maxN];
void sub1(){
	s[0]=0;
	for(ll len=l;len<=r;len++){
		res=max(res,s[len]-s[0]);
		for(ll j=len+1;j<=n;j++){
			res=max(res,s[j]-s[j-len]);
		}
	}
}
void sexy(){
	deque<ll>dq;res=-1000000007;
	for(ll i=1;i<=n;i++){
		if(i-l>=0){
			while(!dq.empty()&&s[dq.back()]>=s[i-l]){dq.pop_back();}
			dq.push_back(i-l);
		}
		if(!dq.empty()&&dq.front()<i-r){dq.pop_front();}
		if(i>=l&&!dq.empty()){res=max(res,s[i]-s[dq.front()]);}
	}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>l>>r;
	for(ll i=1;i<=n;i++){cin>>s[i];s[i]+=s[i-1];}
	// sub1();
	sexy();
	cout<<res;
}

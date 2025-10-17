#include <iostream>
#include <stack>
using namespace std;
#define ll long long 
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
ll n,res=0,a[100005];
stack<ll>st;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i];}
	for(ll i=0;i<=n;i++){
		ll h=(i!=n)?a[i]:0;
		while(!st.empty()&&a[st.top()]>h){
			ll tm=st.top();st.pop();
			ll tH=a[tm],tW=st.empty()?i:i-st.top()-1;
			res=max(res,tH*tW);
		}
		st.push(i);
	}
	cout<<res;
}

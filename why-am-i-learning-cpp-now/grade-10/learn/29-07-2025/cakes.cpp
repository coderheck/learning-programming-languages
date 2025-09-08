#include <iostream>
#include <queue>
using namespace std;
#define ll long long 
ll abs(ll& x){return(x<0)?x*-1:x;}
struct cp{ll x,t;}a[1000005];
struct cmpfn{
	bool operator()(const cp& a,const cp& b)const{
		return(a.x==b.x)?(a.t>b.t):(a.x>b.x);
	}
};
ll n,t,pos=0,res=0;priority_queue<cp,vector<cp>,cmpfn>pq;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>t;
	for(ll i=0;i<n;i++){
		cin>>a[i].x>>a[i].t;
		pq.push(a[i]);
	}
	// for(ll i=0;i<n;i++){
	// 	cout<<pq.top().x<<" "<<pq.top().t<<"\n";
	// 	pq.pop();
	// }
	while(!pq.empty()){
		ll tm=abs(pq.top().x-pos)+pq.top().t;
		if(t<tm){break;}
		t-=tm;
		pos=pq.top().x;
		res++;
		pq.pop();
	}
	cout<<res;
}

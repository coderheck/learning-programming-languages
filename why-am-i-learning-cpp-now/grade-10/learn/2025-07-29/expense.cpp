#include <iostream>
#include <queue>
using namespace std;
#define ll long long
ll man(const ll& a,const ll& b){return(a>b)?a:b;}
ll min(const ll& a,const ll& b){return(a<b)?a:b;}
ll n,k,a,cnt=0,cst=0;
struct fuck{
	bool operator()(const ll& a,const ll& b)const{return(a>b);}
};
priority_queue<ll,vector<ll>,fuck>pq;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=0;i<n;i++){cin>>a;pq.push(a);}
	while(pq.size()>1){
		ll take=min(k,(ll)pq.size()),s=0,mi=1000000000007,ma=-1000000000007,x;
		for(ll i=0;i<take;i++){
			x=pq.top();pq.pop();
			s+=x;
			mi=min(mi,x);ma=max(ma,x);
		}
		cst+=(ma-mi);
		pq.push(s);
	}
	cout<<pq.top()<<"\n"<<cst;
}

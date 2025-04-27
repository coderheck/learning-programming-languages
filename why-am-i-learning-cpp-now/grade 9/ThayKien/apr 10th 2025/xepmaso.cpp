#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
struct hs{ll idx,p;}a[100005];
bool cmpfn(const hs &a,const hs &b){
	return(a.p==b.p)?(a.idx<b.idx):(a.p>b.p);
}
ll n;
int main(){
	cin.tie(0);ios::sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i].idx>>a[i].p;}
	sort(a,a+n,cmpfn);
	for(ll i=0;i<n;i++){cout<<a[i].idx<<" "<<a[i].p<<"\n";}
}

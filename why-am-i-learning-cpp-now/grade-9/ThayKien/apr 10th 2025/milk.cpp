#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
struct milk{ll p,a;};
bool cmpfn(const milk &a,const milk &b){
	return(a.p==b.p)?(a.a>b.a):(a.p<b.p);
}
ll n,m,res=0,tot=0,j=0;milk a[5005];
int main(){
	cin.tie(0);ios::sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=0;i<m;i++){cin>>a[i].p>>a[i].a;}
	sort(a,a+m,cmpfn);
	while(tot<n){
		tot+=a[j].a;
		res+=a[j].a*a[j].p;
		j++;
	}
	if(tot>n){
		cout<<res-(a[j-1].p*(tot-n));
	}else{
		cout<<tot;
	}
}

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
#define ll long long
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
ll min(const ll &a,const ll &b){return(a<b)?a:b;}
ll a[5],minD=1000000007,maxD=0;
bool check(const ll &m){
	for(ll i=1;i<3;i++){
		if(a[i]-a[i-1]!=m||a[i]-a[i-1]!=2*m||a[i]-a[i-1]!=3*m){return false;}
	}
	return true;
}
int main(){
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	maxD=max(abs(a[0]-a[1]),max(abs(a[0]-a[2]),abs(a[1]-a[2])));
	minD=min(abs(a[0]-a[1]),min(abs(a[0]-a[2]),abs(a[1]-a[2])));
	ll l=minD,r=maxD,m;
	//while(l<=r){
	//	if(check(m)){
	//		
	//	}
	//}
	cout<<check(2);
}

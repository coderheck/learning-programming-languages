#include <iostream>
using namespace std;
#define ll long long 
ll n,res=0;
void cOne(ll x){
	while(x){res+=(x%10==1);x/=10;}
}
int main(){
	if(fopen("digits1.inp","r")){
		freopen("digits1.inp","r",stdin);
		// freopen("digits1_rac.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cOne(i);}
	cout<<res;
}

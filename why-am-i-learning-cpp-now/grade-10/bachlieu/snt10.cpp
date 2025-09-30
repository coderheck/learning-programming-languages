#include <iostream>
using namespace std;
#define ll long long 
ll t,n,res=0;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>t;
	while(t--){
		cin>>n;res=0;
		if(n%2==0){res=2;while(n%2==0){n/=2;}}
		for(ll i=3;i*i<=n;i+=2){
			if(n%i==0){
				res=i;
				while(n%i==0){n/=i;}
			}
		}
		if(n>1){cout<<n<<"\n";}else{cout<<res<<"\n";}
	}	
}

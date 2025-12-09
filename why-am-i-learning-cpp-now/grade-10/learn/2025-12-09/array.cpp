#include<iostream>
using namespace std;
#define ll long long
#define tname "array"
const ll maxN=1000005;
ll n,c;
string a,b,A[maxN];
bool check(const ll &len){
    // for(ll i=1;i+len-1<=n;i++){
    //     ll j=i+len-1,ac=0,bc=0,val=0;
    //     for(ll u=i;u<=j;u++){
    //         if(A[u]==a){ac++,val+=bc;}
    //         if(A[u]==b){bc++,val+=ac;}
    //     }
    //     if(val<=c){return true;}
    // }
    // return false;
	ll l=1,r=0,ca=0,cb=0,val=0;
	while(r<n){
		r++;
		if(A[r]==a){ca++;}
		if(A[r]==b){val+=ca,cb++;}
		while(r-l+1>len){
			if(A[l]==a){
				val-=cb,ca--;
			}else if(A[l]==b){
				cb--;
			}
			l++;
		}
		if(r-l+1==len&&val<=c){return true;}
	}
	return false;
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        // freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>c>>a>>b;
    for(ll i=1;i<=n;i++){cin>>A[i];}
    ll l=1,r=n,m,res=0;
    while(l<=r){
        m=l+r>>1;
        if(check(m)){res=m,l=m+1;}else{r=m-1;}
    }
    cout<<res;
}


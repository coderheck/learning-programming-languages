#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define tname "bgrid"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";/*cerr<<(x)<<"\n";*/
#define getbit(x,k) ((x)>>(k))&1
const ll maxN=200005;
ll n,P,Q,x,y,t,w[maxN];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>P;
	if(n<=2000&&P<=2000&&Q<=2000){
		for(ll i=1;i<=P;i++){
			cin>>t>>w[i];
			if(t==2){w[i]*=-1;}
		}
		cin>>Q;
		for(ll q=1;q<=Q;q++){
			ll state=0;
			cin>>x>>y;
			for(ll p=1;p<=P;p++){
				if(w[p]>0){ // t=1
					if(x<=w[p]&&y<=w[p]){state=!state;}
				}else{ // t=2
					w[p]*=-1;
					if(x>=w[p]&&y>=w[p]){state=!state;}
					w[p]*=-1;
				}
			}
			lout(state);
		}
	}else{
		vector<ll>p1,p2;ll mn,mx;
		for(ll i=1;i<=P;i++){
			cin>>t>>w[i];
			if(t==1){p1.push_back(w[i]);}else{p2.push_back(w[i]);}
		}
		cin>>Q;
		sort(p1.begin(),p1.end());
		sort(p2.begin(),p2.end());
		while(Q--){
			cin>>x>>y;
			mx=max(x,y),mn=min(x,y);
			ll	c1=p1.end()-lower_bound(p1.begin(),p1.end(),mx),
				c2=upper_bound(p2.begin(),p2.end(),mn)-p2.begin();
			cout<<((c1+c2)&1)<<"\n";
		}
	}
}


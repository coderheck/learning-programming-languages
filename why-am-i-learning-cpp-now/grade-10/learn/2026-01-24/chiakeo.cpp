#include <iostream>
using namespace std;
#define ll long long
#define tname "chiakeo"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
ll n,m,t,r=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
	cin.tie(0)->sync_with_stdio(0);
	cin>>t;
	while(t--){
        cin>>n>>m;
        if(n==2){
            if(m&1){
                r=m>>1;
                cout<<r<<" "<<m-r<<"\n";
//                cerr<<r<<" "<<m-r<<"\n";
            }else{
//                lout(-1);
                cout<<"-1\n";
            }
        }
	}
}

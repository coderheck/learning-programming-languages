#include <iostream>
using namespace std;
#define tname "bai1"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=200005,maxA=1000000;
ll n,a,res=0;
bool mark[maxA+5];
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>a;mark[a]=true;}
    for(ll i=maxA;i>res;i--){
        if(mark[i]){
            for(ll j=i-res-1;j>res;j--){
                if(mark[j]){if(i%j>res){res=i%j;}}
            }
        }
    }
    lout(res);
    // cout<<res<<"\n";
}

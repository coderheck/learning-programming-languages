#include <iostream>
#include <cmath>
using namespace std;
#define tname "count"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
//    cerr<<x<<"\n";
#define txp(x) (1<<(x))
const ll maxN=100005,maxLog=17,maxP=100000;
bool pr[maxP+5];
void prSieve(){
    pr[0]=pr[1]=true;
    for(ll i=2;i*i<=maxP;i++){
        if(!pr[i]){
            for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
        }
    }
}
ll gcd(const ll &a,const ll &b){return(!b)?a:gcd(b,a%b);}
ll n,a[maxN],stmin[maxLog][maxN],stmax[maxLog][maxN];
ll getmax(const ll &l,const ll &r){
    ll k=log2(r-l+1);
    return max(stmax[k][l],stmax[k][r-txp(k)+1]);
}
ll getmin(const ll &l,const ll &r){
    ll k=log2(r-l+1);
    return min(stmin[k][l],stmin[k][r-txp(k)+1]);
}
bool incc=true,decc=true;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){
        cin>>a[i];
        incc=incc&&(i>=2?(a[i]>=a[i-1]):true);
        decc=decc&&(i>=2?(a[i]<=a[i-1]):true);
    }
	if(n<=1000){ // sub 1: gcd(minA,maxA) == 1
        for(ll i=1;i<=n;i++){stmin[0][i]=stmax[0][i]=a[i];}
        for(ll e=1;e<=log2(n);e++){
            for(ll i=1;i+txp(e)-1<=n;i++){
                stmin[e][i]=min(stmin[e-1][i],stmin[e-1][i+txp(e-1)]);
                stmax[e][i]=max(stmax[e-1][i],stmax[e-1][i+txp(e-1)]);
            }
        }
        ll res=0;
        for(ll l=1;l<=n;l++){
            for(ll r=l;r<=n;r++){
                res+=(gcd(getmin(l,r),getmax(l,r))==1);
            }
        }
        lout(res);
        return 0;
	}else{ // :pray: :pray: :pray:
        ll res=0;
        for(ll l=1;l<=n;l++){
            for(ll r=l;r<=n;r++){
                res+=(gcd(a[l],a[r])==1);
            }
        }
        lout(res);
        return 0;
	}
}

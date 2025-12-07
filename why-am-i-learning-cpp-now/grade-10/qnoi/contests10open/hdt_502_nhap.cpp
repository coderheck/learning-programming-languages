#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
#define tname "hdt_502"
ll gcd(const ll &a,const ll &b){return b?gcd(b,a%b):a;}
ll n;
void sub1(){
    ll res=0,S=floor(sqrt((long double)(n<<1)));
    for(ll s=2;s<=S;s++){
        ll X=s>>1;
        for(ll x=1;x<=X;x++){
            ll y=s-x;
            if(gcd(x,y)!=1){continue;}
            ll denom=y*s;
            if(denom>n){continue;}
            res+=n/denom;
        }
    }
    cout<<res;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    sub1();
}


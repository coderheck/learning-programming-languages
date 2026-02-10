#include <iostream>
using namespace std;
#define tname "thuthach"
#define ll long long
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
ll gcd(const ll &a,const ll &b){return(!b)?a:gcd(b,a%b);}
ll lcm(const ll &a,const ll &b){return(a/gcd(a,b))*b;}
ll pos(const ll &m,const ll &a,const ll &b,const ll &lc){
    // số các số không chia hết cho a và b
    return m-(m/a+m/b-m/lc);
}
ll t,k,a,b,lc,l,r,m,res;
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>t;
    while(t--){
        cin>>k>>a>>b;
        lc=lcm(a,b),l=r=1;
        while(pos(r,a,b,lc)<k){r<<=1;}
        res=r;
        while(l<=r){
            m=(l+r)>>1;
            if(pos(m,a,b,lc)>=k){res=m,r=m-1;}else{l=m+1;}
        }
        lout(res);
    }
}

#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
#define tname "cau1"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxP=1000000;
ll gcd(const ll &a,const ll &b){return(!b)?a:gcd(b,a%b);}
ll lcm(const ll &a,const ll &b){return a/gcd(a,b)*b;}
ll demuoc(const ll &x){
    ll res=0;
    for(ll i=1;i*i<=x;i++){
        if(!(x%i)){
            res+=1+(i!=x/i);
        }
    }
    return res;
}
ll maxpp[maxP+5];
void prSieve(){
    for(ll i=2;i<=maxP;i++){maxpp[i]=i;}
    for(ll i=2;i<=maxP;i++){
        if(maxpp[i]==i){
            for(ll j=i*2;j<=maxP;j+=i){if(maxpp[j]==j){maxpp[j]=i;}}
        }
    }
}
ll t,a,b;
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>t;
    if(t==1){
        cin>>a>>b;
        lout(demuoc(a*b));
    }else{
        prSieve();
        while(t--){
            cin>>a>>b;
            umap<ll,ll>cnt;ll res=1;
            while(a>1){cnt[maxpp[a]]++,a/=maxpp[a];}
            while(b>1){cnt[maxpp[b]]++,b/=maxpp[b];}
            if(a>1){cnt[a]++;}
            if(b>1){cnt[b]++;}
            for(auto it:cnt){res*=(it.second+1);}
            lout(res);
        }
    }
}

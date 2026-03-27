#include<iostream>
#include<string>
using namespace std;
#define tname "cau1a"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
   cerr<<x<<"\n";
ll rev(ll x){
    ll r=0;
    while(x){r=r*10+x%10;x/=10;}
    return r;
}
ll a,b;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>a>>b;
    lout(max(rev(a),rev(b)));
}

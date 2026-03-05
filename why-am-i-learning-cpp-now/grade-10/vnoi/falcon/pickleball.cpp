#include <iostream>
#include <string>
using namespace std;
#define tname "optimal"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
ll n,res=0;string s;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>s;
    for(ll i=0;i<n;i++){
        if(s[i]=='0'){i++;continue;}
        ll j=i,len;
        while(j<n&&s[j]=='1'){j++;}
        len=j-i,res+=(len+2)/3;
        i=j;
    }
    lout(res);
}

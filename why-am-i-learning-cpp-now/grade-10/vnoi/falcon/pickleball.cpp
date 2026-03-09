#include <iostream>
using namespace std;
#define tname "pickleball"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n";
const ll maxN=300005,inff=1000000000007;
ll n,res=0,len[maxN],bad[maxN],lz=0,bz=0;
char s[maxN];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>s;
    for(ll i=0,j;i<n;){
        if(s[i]=='0'){i++;continue;}
        j=i;
        while(j<n&&s[j]=='1'){j++;}
        bad[bz++]=(i==0||j==n);
        len[lz++]=j-i;
        i=j;
    }
    if(!lz){lout("0");return 0;}
    ll r=inff;
    for(ll i=0;i<lz;i++){
        if(bad[i]){
            r=min(r,len[i]-1);
        }else{
            r=min(r,(len[i]-1)/2);
        }
    }
    ll phu=r*2+1;
    for(ll i=0;i<lz;i++){res+=(len[i]+phu-1)/phu;}
    lout(res);
}

#include<iostream>
using namespace std;
#define tname "mseq"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<" "; \
    cerr<<x<<" ";
const ll maxN=1000005;
ll n,a[maxN],m[maxN],res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        a[i]=1+i-a[i];
    }
    for(ll i=1;i<=n;i++){
        if(a[i]==i){continue;}
        if(a[i]<=0){res++;}
        m[i]=true;
    }
    ll st=-1;
    for(ll i=1;i<=n;i++){
        if(m[i]){st=-1;}
        if(st==-1&&!m[i]){st=i;}
        if(!m[i])
            res+=(a[i]!=i-st+1);
    }
    lout(res);
}

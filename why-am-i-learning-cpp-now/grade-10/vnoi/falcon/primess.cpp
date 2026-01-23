#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
#define tname "primess"
#define ll long long
#define umap unordered_map
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(a) cout<<(a);cerr<<(a);
const ll maxN=100005,maxP=5800139;
bool pr[maxP+5];ll prs[400005],prc=0;
void prSieve(){
    pr[0]=pr[1]=true;
    for(ll i=2;i*i<=maxP;i++){
        if(!pr[i]){
            for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
        }
    }
    prs[prc++]=2;
    for(ll i=3;i<=maxP;i+=2){
        if(!pr[i]){prs[prc++]=i;}
    }
}
ll q,n,k;string s1,s2;umap<char,ll>cnt;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    prSieve();
    cin>>q;
    while(q--){
        cin>>n>>k;
        s1.clear();s2.clear();
        for(ll i=0;i<n;i++){s1+=to_string(prs[i]);}
        ll pos=0;k=s1.size()-k;
        while(k--){
            char minn='0';ll tm=0;
            for(ll i=pos;i<(ll)s1.size()-k;i++){
                if(s1[i]>minn){minn=s1[i],tm=i;}
            }
            s2+=minn,pos=tm+1;
        }
        cout<<s2<<"\n";
        cerr<<s2<<"\n";
    }
}

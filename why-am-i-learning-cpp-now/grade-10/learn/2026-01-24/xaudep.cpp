#include <iostream>
#include<string>
using namespace std;
#define ll long long
#define tname "xaudep"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define debug(x) cerr<<"debug "<<(x)<<"\n"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
ll n,res=0,cnt[256],uc=0;string s;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
	cin.tie(0)->sync_with_stdio(0);
    cin>>n>>s;
    if(n<=2){
        // vì cần >= 3 kí tự khác nhau => min len >= 3
        lout(0);return 0;
    }
    s="#"+s;
//    for(ll i=1;i<=3;i++){
//        if(!cnt[s[i]]){uc++;}
//        cnt[s[i]]++;
//    }
//    if(uc==3){res=3;}
    ll l=1,r=1;
    while(l<=n&&r<=n){
        while(r<=n&&s[r]!=s[r-1]){
            if(!cnt[s[r]]){uc++;} cnt[s[r]]++;
//            debug(1);
            if(uc>=3){
                res=max(res,r-l+1);
//                cerr<<res<<" "<<l<<"-"<<r<<"\n";
            }
            r++;
        }
        if(r==n){break;}
        while(r+1<=n&&s[r+1]==s[r]){r++;}
        while(l<r){
            if(cnt[s[l]]==1){
                uc--,cnt[s[l]]--;
            }else if(cnt[s[l]]>1){
                cnt[s[l]]--;
            }
            l++;
        }
        ll e=r+2;
        if(e>n){break;}
        while(r<e){
            if(!cnt[s[r]]){uc++;} cnt[s[r]]++;
            r++;
        }
    }
    cout<<res;
}

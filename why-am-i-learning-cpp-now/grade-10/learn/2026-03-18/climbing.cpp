#include<iostream>
#include<cmath>
using namespace std;
#define tname "climbing"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
//    cerr<<x<<"\n";
const ll maxN=200005;
ll n,Q,a[maxN];
bool sub4=true;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin>>n>>Q;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        if(sub4){sub4=(a[i]==1||a[i]==2);}
    }
    for(ll q=1,l,r,res;q<=Q;q++){
        cin>>l>>r;res=0;
        for(ll u=l;u<=r;u++){
            for(ll v=u;v<=r;v++){
                if(!((v-u+1)&1)){continue;}
                bool nice=true;
                for(ll k=u;k<=v;k++){
                    if(k==1){continue;}
                    if((k-u+1)&1){
                        if(a[k]>a[k-1]){nice=false;break;}
                    }else{
                        if(a[k]<a[k-1]){nice=false;break;}
                    }
                }
                if(nice){res=max(res,v-u+1);}
            }
        }
        lout(res);
    }
}

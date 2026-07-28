// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
#define tname "thhv25_dx12_10_b"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=200005,maxP=1000000,inff=1LL<<62;
ll n,Q,a[maxN];
bool sub4=true;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
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

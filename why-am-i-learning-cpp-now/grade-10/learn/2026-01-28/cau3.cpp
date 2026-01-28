#include <iostream>
using namespace std;
#define ll long long
#define tname "cau3"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define getbit(x,k) ((x)>>(k))&1
const ll maxN=1000005;
ll n,x,res=0,a[maxN],p[21],pz=0;
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>x;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    if(x==1){
        ll le=0;
        for(ll i=1;i<=n;i++){le+=(a[i]&1);}
        lout(n-le);
    }else if(n<=50&&x<=n&&x>=2){

    }else if(n<=20&&x>n){
        ll res=0;
        for(ll mm=1;mm<=(1<<n);mm++){
            // bitmask với bit thứ i là trạng thái chọn số a[i]
            ll sum=0;bool c=true;pz=0;
            for(ll i=1;i<=n;i++){
                if(getbit(mm,i-1)){p[pz++]=a[i];}
            }
            if(pz<2){continue;}
            sum=p[0];
            for(ll i=1;i<pz;i++){
                if(p[i]<=p[i-1]){c=false;break;}
                sum+=p[i];
            }
            if(c&&sum>=x){
                res++;
                // for(ll i=0;i<pz;i++){cerr<<p[i]<<" ";}
                // cerr<<"\n";
            }
        }
        lout(res);
    }
}

#include <iostream>
#include <cstring>
using namespace std;
#define tname "connect"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define getbit(x,k) (((x)>>(k))&1)
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
const ll maxN=25005;
ll n,a[maxN],res=1LL<<62;
bool mark[25];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n-1;i++){cin>>a[i];}
    if(n<=20){
        // sub 1: bitmask
        const ll maxMask=(1LL<<n);
        for(ll mm=1;mm<=maxMask;mm++){
            // bitmask với bit thứ i là trạng thái chọn dây thứ i
            // i - i - i - i
            ll c=0,cost=0;
            memset(mark,false,sizeof mark);
            for(ll i=1;i<=n;i++){
                if(i==1){
                    if(getbit(mm,i-1)){ // dây đầu tiên
                        c++;
                        if(!mark[i]){mark[i]=true,cost+=a[i];}
                    }
                }else if(i==n){
                    if(getbit(mm,i-2)){ // dây cuối cùng
                        c++;
                        if(!mark[i-1]){mark[i-1]=true,cost+=a[i-1];}
                    }
                }else{
                    if(getbit(mm,i-1)){ // dây sau nó
                        c++;
                        if(!mark[i]){mark[i]=true,cost+=a[i];}
                    }else if(getbit(mm,i-2)){ // dây trước nó
                        c++;
                        if(!mark[i-1]){mark[i-1]=true,cost+=a[i-1];}
                    }
                }
            }
            if(c==n){res=min(res,cost);}
        }
        lout(res);
    }
}

// the enemy ascended beyond your control
// or was that all your intention
// they have managed to demolish whatever we made
// but you're failing to comprehend
// if they can, they will easily butcher you whole
// while you're blinded by your depression
// i have gotten to the point where i'm just too afraid
// that you're going to meet your end

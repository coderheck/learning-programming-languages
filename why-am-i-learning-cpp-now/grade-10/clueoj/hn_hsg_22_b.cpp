#include <iostream>
using namespace std;
#define tname "bs"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" ";
ll n,x,res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>x;
    for(ll i=1,j;i*i<=x;i++){
        // cách 1
        // if(x%i==0&&x/i<=n){res++;}

        // cách 2
        if(x%i==0){
            j=x/i;
            if(i<=n&&j<=n){res+=1+(i!=j);}
        }
    }
    lout(res);
}

#include <iostream>
using namespace std;
#define tname "cau3"
#define ll long long
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=1005,inff=1ll<<62;
ll m,n,k,a[maxn][maxn],sum[maxn][maxn];
ll getsum(const ll &i,const ll &j,const ll &len){
    // (i,j) góc trên bên trái, (u,v) góc dưới bên phải
    ll u=i+len-1,v=j+len-1;
    if(u>m||v>n){return -inff;}
    return sum[u][v]-sum[i-1][v]-sum[u][j-1]+sum[i-1][j-1];
}
bool niettrans(const ll &len){
    // sub 3: với k = 0 ==> tìm vùng có tổng = 0
//    cout<<"len: "<<len<<"\n";
    for(ll i=1;i<=m;i++){
        for(ll j=1;j<=n;j++){
            ll ss=getsum(i,j,len);
            ll u=i+len-1,v=j+len-1;
            if(ss==-inff){continue;}
//            lout("getsum ("<<i<<", "<<j<<") ("<<u<<", "<<v<<"): "<<ss);
            if(ss==0){return true;}
        }
    }
    return false;
}
bool kienbigcode(const ll &len){
    // sub all: với k bất kì ==> tìm vùng có tổng <= k
//    cout<<"len: "<<len<<"\n";
    for(ll i=1;i<=m;i++){
        for(ll j=1;j<=n;j++){
            ll ss=getsum(i,j,len);
            ll u=i+len-1,v=j+len-1;
            if(ss==-inff){continue;}
//            lout("getsum ("<<i<<", "<<j<<") ("<<u<<", "<<v<<"): "<<ss);
            if(ss<=k){return true;}
        }
    }
    return false;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
    cin>>m>>n>>k;
    for(ll i=1;i<=m;i++){
        for(ll j=1;j<=n;j++){
            cin>>a[i][j];
            sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i][j];
        }
    }
    // sum[u][v]-sum[i-1][v]-sum[u][j-1]+sum[i-1][j-1]
    if(k==0){ // sub 3
        ll res=0;
        ll l=1,r=min(m,n),mid=0;
        while(l<=r){
            ll mid=(l+r)>>1;
            if(niettrans(mid)){res=mid;l=mid+1;}else{r=mid-1;}
        }
        lout(res*res);
    }else{ // GAY
        ll res=0;
        ll l=1,r=min(m,n),mid=0;
        while(l<=r){
            ll mid=(l+r)>>1;
            if(kienbigcode(mid)){res=mid;l=mid+1;}else{r=mid-1;}
        }
        lout(res*res);
    }
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
